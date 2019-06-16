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
        int n,i;
        cin>>n;
        int a[n];
        for(i = 0;i<n;i++)
            cin>>a[i];
        stack<int> st,index;
        map<int,int> next;
        st.push(a[0]);
        index.push(0);
        for(i = 1;i<=n-1;i++)
        {
            if(st.empty())
                st.push(a[i]),
                index.push(i);
            else
            {
                while(!st.empty() && st.top() < a[i])
                {
                    next[index.top()] = a[i];
                    st.pop();
                    index.pop();
                }
                st.push(a[i]);
                index.push(i);
            }
        }
        while(!st.empty())
            next[index.top()] = -1,
            st.pop(),
            index.pop();
        for(i = 0;i<n;i++)
            cout<<next[i]<<" ";
        cout<<endl;
    }
    return 0;
}