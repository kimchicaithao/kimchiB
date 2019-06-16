#include<bits/stdc++.h>

using namespace std;

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
        string temp = "", ope = "(+-*/)^";
        map<char,int> priority;
        priority['^'] = 3;priority['*'] = 2;priority['/'] = 2;priority['+'] = 1; priority['-'] = 1;priority[')'] = 0;
        int i,j,n = s.size();
        stack<char> st;
        for(i = 0;i<n;i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
                cout<<s[i];
            else if(s[i] == '(')
                st.push(s[i]);
            else if(s[i] == ')')
            {
                while(!st.empty() && st.top()!='(')
                {
                    cout<<st.top();
                    st.pop();
                }
                st.pop();
            }
            else if(ope.find(s[i])!=string::npos)
            {
                while(!st.empty() && priority[st.top()] >= priority[s[i]])
                {
                    cout<<st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
    }
    return 0;
}