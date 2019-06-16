#include<bits/stdc++.h>

using namespace std;

#define forn(i,n) for(i=0;i<n;++i)
#define for1(i,n) for(i=1;i<=n;++i)
#define pb push_back

string toStr(long long n)
{
    string ans;
    stringstream str;
    str << n;
    str >> ans;
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i = 0,j;
        string temp = "", ope = "(+-*/)";
        map<string,int> priority;
        priority["*"] = 2;
        priority["/"] = 2;
        priority["+"] = 1;
        priority["-"] = 1;
        priority[")"] = 0;
        vector<string> split, tempRes;
        // Tách xâu.
        while(i<s.size())
        {
            while(ope.find(s[i])==string::npos && i<s.size())
            {
                temp+=s[i];
                i++;
            }
            if(temp.size())
                split.pb(temp);
            string t = "";
            t+=s[i];
            split.pb(t);
            temp = "";
            i++;
        }
        // Chuyển trung tố -> hậu tố
        stack<string> st;
        forn(i,split.size())
        {
            string j = split[i];
            if(ope.find(j) == string::npos)
                tempRes.pb(j);
            else if(j == "(")
                st.push(j);
            else if(j == ")")
            {
                while(!st.empty() && st.top()!="(")
                {
                    tempRes.push_back(st.top());
                    st.pop();
                }
                st.pop();
            }
            else if(ope.find(j)!=string::npos)
            {
                while(!st.empty() && priority[j] <= priority[st.top()])
                {
                    tempRes.pb(st.top());
                    st.pop();
                }
                st.push(j);
            }
        }
        while(!st.empty())
        {
            tempRes.pb(st.top());
            st.pop();
        }
        // Tính giá trị. 
        stack<string> t;
        forn(i,tempRes.size())
        {
            string j = tempRes[i];
            if(isdigit(j[0]))
                t.push(j);
            else if(ope.find(j)!=string::npos)
            {
                long long y = atoll(t.top().c_str());
                t.pop();
                long long x = atoll(t.top().c_str());
                t.pop();
                long long z;
                if(j == "*")
                    z = x * y;
                else if(j == "/")
                    z = x/y;
                else if(j == "-")
                    z = x - y;
                else z = x + y;
                t.push(toStr(z));
            }
        }
        cout<<t.top()<<endl;
    }
    return 0;
}