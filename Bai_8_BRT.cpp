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
		random_shuffle(a,a+n);
		sort(a,a+n);
		map<int,int> cnt;
		for(i = 0;i<n-1;i++)
			cnt[a[i+1] - a[i]]++;
		map<int,int>::iterator it;
		it = cnt.begin();
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}