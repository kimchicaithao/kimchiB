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
		int n,m;
		cin>>n>>m;
		int i,j;
		map<int,vector<int>> adjList;
		map<int,int> visited;
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
				queue<int> q;
				q.push(i);
				visited[i] = 1;
				while(!q.empty())
				{
					int u = q.front();q.pop();
					cout<<u<<" ";
					for(auto v:adjList[u])
					{
						if(!visited[v])
						{
							visited[v] = 1;
							q.push(v);
						}
					}
				}
				cout<<endl;
			}
		}
	}
	return 0;
}