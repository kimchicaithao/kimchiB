#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	string s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        stack<char> st;
        int i, n = s.size(), flag = 1;
        for(i = 0;i<n;i++)
        {
            if(s[i] == '(' || s[i] == '[')
                st.push(s[i]);
            else if(s[i] == ')')
            {
                if(st.empty() || st.top()!='(')
                {
                    cout<<"NO\n";
                    flag = 0;
                    break;
                }
                else st.pop();
            }
            else if(s[i] == ']')
            {
                if(st.empty() || st.top()!='[')
                {
                    cout<<"NO\n";
                    flag = 0;
                    break;
                }
                else st.pop();
            }
        }
        if(!st.empty() && flag)
        {
            cout<<"NO\n";
            flag = 0;
        }
        if(flag)
            cout<<"YES\n";
    }
	return 0;
}