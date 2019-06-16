#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int n,i,j,k, ansX = INT_MAX, ansY = INT_MAX;
	cin>>n;
	for(i = 0;i<n;i++)
	{
		int a, b;
		cin>>a>>b;
		ansX = min(ansX, a);
		ansY = min(ansY, b);
	}
	long long ans = 1LL * ansX * ansY;
	cout<<ans;
	return 0;
}