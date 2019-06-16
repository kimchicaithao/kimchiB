#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

long long binPow(int n, int k)
{
	long long x = 1, y = n;
	while(k)
	{
		if(k&1)
			x = (x * y)%mod;
		y = (y * y)%mod;
		k>>=1;
	}
	return x%mod;
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
		cout<<binPow(n,k)<<endl;
	}
	return 0;
}