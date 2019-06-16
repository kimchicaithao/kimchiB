// Thuật toán gốc : Nguồn: Thùy Trang Trần - Team4T's Leader
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int c,n;
	cin>>c>>n;
	int w[n],i,j;
	for(i = 0;i<n;i++)
		cin>>w[i];
	vector<vector<int>> dp(n,vector<int>(c+1,0));
	dp[0][0] = dp[0][w[0]] = 1;
	int ans = 0;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<=c;j++){
			if(!dp[i][j])
				continue;
			ans = max(ans, j);
			if(i == n - 1)
				continue;
			dp[i+1][j] |= dp[i][j];
			if(j + w[i+1] <= c)
				dp[i+1][j + w[i+1]] |= dp[i][j];
		}
	}
	cout<<ans;
	return 0;
}