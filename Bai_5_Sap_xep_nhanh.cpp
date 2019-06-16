#include<bits/stdc++.h>

using namespace std;

const int maxn = 1e5;

int n, a[maxn];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int i,j;
		for(i = 0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(i = 0 ;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
	}
	return 0;
}