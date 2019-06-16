#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int t;
	cin>>t;
	while(t--)
	{
		int k;cin>>k;
		string s;cin>>s;
		priority_queue<int> q;
		map<char,int> counter;
		for(auto i:s)
			counter[i]++;
		for(auto i:counter)
			q.push(i.second);
		while(!q.empty() && k > 0)
		{
			k--;
			int u = q.top();
			u--;
			q.pop();
			if(u > 0)
				q.push(u);
		}
		long long ans = 0;
		while(!q.empty())
		{
			ans+= round(pow(q.top(),2));
			q.pop();
		}
		cout<<ans<<endl;
	}
	return 0;
}