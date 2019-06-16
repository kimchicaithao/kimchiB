#include<bits/stdc++.h>

using namespace std;

const int maxn = 1e5;

int n;

long long a[maxn];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	cin>>n;
	int i,j;
	for(i = 0; i<n;i++)
		cin>>a[i];
	stable_sort(a,a+n);
	for(i = 0; i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}

