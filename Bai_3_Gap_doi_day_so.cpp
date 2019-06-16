#include<bits/stdc++.h>

using namespace std;

int n;
long long k;


long long solve(int n, long long k)
{
	long long index = pow(2,n-1);
	if(k == index)
		return n;
	if(k > index)
		return solve(n-1, k - index);
	return solve(n-1, k);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		cout<<solve(n,k)<<endl;
	}
	return 0;
}
