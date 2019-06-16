#include<bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 5;

int a[maxn], n, k;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int i,j, index = -1;
		for(i = 0;i<n;i++)
		{
			cin>>a[i];
			if(a[i] == k && index == -1)
				index = i + 1;
		}
		if(index == -1)
			cout<<"NO\n";
		else cout<<index<<endl;
	}
	return 0;
}