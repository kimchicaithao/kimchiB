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
		int s = 0, e = n-1, maxV, minV;
		for(s = 0;s<n;s++)
		{
			if(a[s] > a[s+1])
				break;
		}
		if(s == n-1)
		{
			cout<<"YES\n";break;
		}
		else
		{
			for(e = n-1;e>0;e--)
			{
				if(a[e] < a[e-1])
					break;
			}
			maxV = a[s]; minV = a[s];
			for(i = s+1;i<=e;i++)
			{
				maxV = max(maxV, a[i]);
				minV = min(minV, a[i]);
			}
			for(i = 0;i<s;i++)
			{
				if(a[i] > minV)
				{
					s = i;
					break;
				}
			}
			for(i = n-1;i>e;i--)
			{
				if(a[i] < maxV)
				{
					e = i;
					break;
				}
			}
			int x = e - s + 1;
			if(x == 0)
				cout<<"YES\n";
			else cout<<x<<endl;
		}
	}
	return 0;
}