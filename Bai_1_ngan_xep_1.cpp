#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    vector<int> st;
    string s;
    int n;
    while(cin>>s)
    {
        if(s == "push")
        {
            cin>>n;
            st.push_back(n);
        }
        else if(s == "pop")
            st.pop_back();
        else 
        {
            if(st.size())
            {
                for(int i = 0;i<st.size();i++)
                    cout<<st[i]<<" ";
                cout<<endl;
            }
            else cout<<"empty\n";
        }
    }
    return 0;
}