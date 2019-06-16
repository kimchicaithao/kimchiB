#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

long long preSolve(int n, int k)
{
	long long res[n];
	res[0] = 1;res[1] = 1;
	for(int i = 2;i<n;i++)
	{
		res[i] = 0;
		for(int j = 1; j<=k && j <= i;j++)
		{
			res[i]+= res[i-j];
			res[i]%=mod;
		}
	}
	return res[n-1];
}

long long solve(int n, int k)
{
	return preSolve(n+1,k);
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
		cout<<solve(n,k)<<endl;
	}
	return 0;
}