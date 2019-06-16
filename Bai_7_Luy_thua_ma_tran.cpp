#include<bits/stdc++.h>

using namespace std;

const int maxn = 105;
const int mod = 1e9 + 7;

typedef vector<vector<long long>> vll;

vll multiMatrix(vll mtA,vll mtB)
{
	int i,j,k, n = mtA.size();
	vll ans(n, vector<long long>(n));
	for(i = 0;i<n;i++)
		for(j = 0;j<n;j++)
		{
			ans[i][j] = 0;
			for(k = 0;k<n;k++)
			{
				ans[i][j]+= (mtA[i][k] * mtB[k][j])%mod;
				ans[i][j]%=mod;
			}
		}
	return ans;
}

vll powMatrix(vll mt, int k)
{
	int i,j, n = mt.size();
	vll x(n,vector<long long>(n));
	for(i = 0;i<n;i++)
		for(j = 0;j<n;j++)
			x[i][j] = (i == j);
	while(k)
	{
		if(k&1)
			x = multiMatrix(x,mt);
		mt = multiMatrix(mt,mt);
		k>>=1;
	}
	return x;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vll matrix(n,vector<long long>(n));
		for(auto &i:matrix)
			for(auto &j:i)
				cin>>j;
		matrix = powMatrix(matrix,k);
		for(auto i:matrix)
		{
			for(auto j:i)
				cout<<j<<" ";
			cout<<endl;
		}
	}
	return 0;
}