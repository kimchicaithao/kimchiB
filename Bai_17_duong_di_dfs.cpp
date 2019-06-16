#include<bits/stdc++.h>

using namespace std;

map<int, vector<int>> adjList;
map<int, int> dist, visited;

int n, m, u, v, flag = 0;

void find_path(int curr)
{
	if (flag)
		return;
	if (curr == v)
	{
		cout << dist[curr] << endl;
		flag = 1;
		return;
	}
	for (auto adj : adjList[curr])
	{
		if (!visited[adj])
		{
			visited[adj] = 1;
			dist[adj] = dist[curr] + 1;
			find_path(adj);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int t;
	cin >> t;
	while (t--)
	{
		flag = 0;
		cin >> n >> m >> u >> v;
		visited.clear(); adjList.clear(); dist.clear();
		for (int i = 0; i < m; i++)
		{
			int a, b;
			cin >> a >> b;
			adjList[a].emplace_back(b);
			adjList[b].emplace_back(a);
		}
		dist[u] = 0;
		find_path(u);
		if (!flag)
			cout << -1 << endl;
	}
	return 0;
}