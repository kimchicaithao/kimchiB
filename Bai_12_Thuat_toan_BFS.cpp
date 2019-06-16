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
		int n,m,u;
		cin>>n>>m>>u;
		int i,j;
		map<int, vector<int>> adjList;
		map<int,int> visited;
		for(i = 0;i<m;i++)
		{
			int a,b;
			cin>>a>>b;
			adjList[a].emplace_back(b);
			adjList[b].emplace_back(a);
		}
		queue<int> q;
		q.push(u);
		visited[u] = 1;
		while(!q.empty())
		{
			int u = q.front();q.pop();
			cout<<u<<" ";
			for(auto v:adjList[u])
				if(!visited[v])
				{
					visited[v] = 1;
					q.push(v);
				}
		}
		cout<<endl;
	}
	return 0;
}