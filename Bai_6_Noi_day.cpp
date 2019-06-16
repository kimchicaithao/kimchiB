#include<bits/stdc++.h>

using namespace std;

const int maxn = 2e6 + 5;
const int mod = 1e9 + 7;

int c[maxn],n;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cin>>n;
	int i,j;
	priority_queue<long long,vector<long long>, greater<long long>> q;
	for(i = 0;i<n;i++)
	{
		cin>>c[i];
		q.push(c[i]);
	}
	long long ans = 0;
	while(q.size() > 1)
	{
		long long a = q.top();q.pop();
		long long b = q.top();q.pop();
		long long c = (a + b)%mod;
		q.push(c);
		ans+=c;
		ans%=mod;
	}
	cout<<ans;
	return 0;
}