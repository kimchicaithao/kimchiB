#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    int q;
    cin>>q;
    stack<int> st;
    while(q--)
    {
        string s;
        cin>>s;
        int i,n;
        if(s == "PUSH")
        {
            cin>>n;
            st.push(n);
        }
        else if(s == "POP")
        {
            if(!st.empty())
                st.pop();
        }
        else
        {
            if(st.empty())
                cout<<"NONE\n";
            else cout<<st.top()<<endl;
        }
    }
    return 0;
}