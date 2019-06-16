#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int t;
	cin >> t;
	while (t--)
	{
		int n, m, u, v, i, j, flag = 0;
		cin >> n >> m >> u >> v;
		map<int, vector<int>> adjList;
		map<int, int> dist, visited;
		for (i = 0; i < m; i++)
		{
			int a, b;
			cin >> a >> b;
			adjList[a].emplace_back(b);
			adjList[b].emplace_back(a);
		}
		queue<int> q;
		q.push(u);
		dist[u] = 0;
		while (!q.empty())
		{
			int top = q.front(); q.pop();
			if (top == v)
			{
				cout << dist[top] << endl;
				flag = 1;
				break;
			}
			for (auto adj : adjList[top])
			{
				if (!visited[adj])
				{
					visited[adj] = 1;
					q.push(adj);
					dist[adj] = dist[top] + 1;
				}
			}
		}
		if (!flag)
			cout << -1 << endl;
	}
	return 0;
}