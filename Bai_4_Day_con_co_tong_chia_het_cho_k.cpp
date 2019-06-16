#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,j,i;
    cin>>n>>k;
    vector<int> a(n);
    for(i = 0;i<n;i++)
    {
      cin>>a[i];
      a[i]%=k;
    }
    vector<int> ans(k, INT_MIN), mirr(k);
    ans[0] = 0;
    for(i = 0;i<n;i++)
    {
      for(j = 0;j<k;j++)
        mirr[j] = max(ans[j], ans[(j - a[i] + k)%k] + 1);
      ans.swap(mirr);
    }
    cout<<ans[0];
}