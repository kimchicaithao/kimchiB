#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

long long binPow(int a, int b)
{
	long long x = 1, y = a;
	while(b)
	{
		if(b&1)
			x = (x * y)%mod;
		y = (y * y)%mod;
		b>>=1;
	}
	return x%mod;
}

long long inverserEuler(int n)
{
	return binPow(n,mod-2);
}

long long C(int k, int n)
{
	vector<long long> f(n+1,1);
	for(int i = 2;i<=n;i++)
		f[i] =  (f[i-1] * i)%mod;
	return (f[n] * ((inverserEuler(f[k]) * inverserEuler(f[n-k]))%mod)%mod)%mod;
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
		cout<<C(k,n)<<endl;
	}
	return 0;
}