#include<bits/stdc++.h>

using namespace std;

map<int,vector<int>> adjList;
map<int,int> visited;

void dfs(int u)
{
	cout<<u<<" ";
	visited[u] = 1;
	for(auto v:adjList[u])
		if(!visited[v])
			dfs(v);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int i,j;
		adjList.clear();
		visited.clear();
		for(i = 0;i<m;i++)
		{
			int u,v;
			cin>>u>>v;
			adjList[u].emplace_back(v);
			adjList[v].emplace_back(u);
		}
		for(i = 1;i<=n;i++)
		{
			if(!visited[i])
			{
				dfs(i);
				cout<<endl;
			}
		}
	}
	return 0;
}