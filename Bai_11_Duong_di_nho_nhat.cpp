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
        int n,m;
        cin>>n>>m;
        int a[n+1][m+1],i,j;
        memset(a,0,sizeof(a[0][0])*(m+1)*(n+1));
        for(i = 1;i<=n;i++)
            for(j = 1;j<=m;j++)
                cin>>a[i][j];
        long long dp[n+1][m+1];
        memset(dp,0,sizeof(dp[0][0]) *(m+1) *(n+1));
        // với hàng đầu tiên, chỉ có cách đi sang phải.
        for(i = 1;i<=m;i++)
            dp[1][i] = a[1][i] + dp[1][i-1];
        // Với cột đầu tiên, chỉ có cách đi từ trên xuống.
        for(i = 1;i<=n;i++)
            dp[i][1] = a[i][1] + dp[i-1][1];
        for(i = 2;i<=n;i++)
            for(j = 2;j<=m;j++)
                dp[i][j]+=(a[i][j] + min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1])));
        cout<<dp[n][m]<<endl;
    }
    return 0;
}