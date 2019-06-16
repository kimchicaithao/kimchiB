#include<bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 5;

vector<pair<int,int>> job(maxn);

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,j, last = -1, ans = 0;
		for(i = 0;i<n;i++)
			cin>>job[i].second>>job[i].first;
		sort(job.begin(),job.begin()+n);
		for(i = 0;i<n;i++)
		{
			if(job[i].second < last)
				continue;
			ans++;
			last = job[i].first;
		}
		cout<<ans<<endl;
	}
	return 0;
}