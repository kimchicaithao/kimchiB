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
        int n;
        cin>>n;
        int a[n],i,j;
        for(i = 0;i<n;i++)
            cin>>a[i];
        stack<int> d;
        int k, l[n],r[n];
        long long ans = 0;
        for(k = 0;k<n;k++)
        {
            while(!d.empty() && a[d.top()] >= a[k])
                d.pop();
            if(d.empty())
                l[k] = -1;
            else l[k] = d.top();
            d.push(k);
        }
        while(!d.empty())
            d.pop();
        for(k = n-1;k>=0;k--)
        {
            while(!d.empty() && a[d.top()] >= a[k])
                d.pop();
            if(d.empty())
                r[k] = n;
            else r[k] = d.top();
            d.push(k);
        }
        for(k = 0;k<n;k++)
            ans = max(ans, 1LL*a[k] * (r[k] - l[k] - 1));
        cout<<ans<<endl;
    }

    return 0;
}