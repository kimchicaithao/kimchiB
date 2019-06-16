#include<bits/stdc++.h>

using namespace std;

int final = 0;

void next(int x[], int n, int k)
{
	int i = k - 1,j;
	while(x[i] == n - k + i + 1 && i>=-1)
		i--;
	if(i < 0)
	{
		final = 1;
		return;
	}
	x[i] = x[i]+1;
	for(j = i+1;j<k;j++)
		x[j] = x[j-1] + 1;
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
		int a[k],i;
		map<int,int> exist;
		for(i = 0;i<k;i++)
		{
			cin>>a[i];
			exist[a[i]] = 1;
		}
		final = 0;
		next(a, n , k);
		if(final)
			cout<<k<<endl;
		else
		{
			int ans = 0;
			for(i = 0;i<k;i++)
				if(exist[a[i]] == 0)
					ans++;
			cout<<ans<<endl;
		}
	}
	return 0;
}