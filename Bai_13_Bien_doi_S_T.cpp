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
		int s, t;
		cin>>s>>t;
		map<int,int> dist, visited;
		queue<int> q;
		q.push(s);
		visited[s] = 1;
		dist[s] = 0;
		while(!q.empty())
		{
			int u = q.front();q.pop();
			if(u == t)
			{
				cout<<dist[u]<<endl;
				break;
			}
			int u1 = u * 2, u2 = u - 1;
			if(u1 <= t * 2 && !visited[u1])
			{
				q.push(u1);
				visited[u1] = 1;
				dist[u1] = dist[u] + 1;
			}
			if(!visited[u2])
			{
				q.push(u2);
				visited[u2] = 1;
				dist[u2] = dist[u] + 1;
			}
		}
	}
	return 0;
}