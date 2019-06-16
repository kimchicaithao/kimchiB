#include<bits/stdc++.h>

using namespace std;

map<int,vector<int>> adjList;
map<int,int> visited;

void dfs(int u)
{
	visited[u] = 1;
	cout<<u<<" ";
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
		int n,m,u;
		cin>>n>>m>>u;
		adjList.clear(); visited.clear();
		int i,j;
		for(i = 0;i<m;i++)
		{
			int a,b;
			cin>>a>>b;
			adjList[a].emplace_back(b);
			adjList[b].emplace_back(a);
		}
		dfs(u);
		cout<<endl;
	}
	return 0;
}