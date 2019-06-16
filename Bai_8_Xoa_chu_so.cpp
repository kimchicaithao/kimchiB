#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    int n,k;
    string s;
    cin>>n>>k>>s;
    stack<char> st;
    for(auto i:s)
    {
        if(st.empty())
          st.push(i);
        else if(i > st.top() && k > 0)
        {
          while(!st.empty() && i > st.top() && k > 0)
          {
            st.pop();
            k--;
          }
            st.push(i);
        }
        else st.push(i);
    }
    while(k--)
      st.pop();
    string ans = "";
    while(!st.empty())
    {
      ans+=st.top();
      st.pop();
    }
    reverse(begin(ans), end(ans));
    cout<<ans;
    return 0;
}