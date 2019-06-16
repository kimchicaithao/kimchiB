#include<bits/stdc++.h>

using namespace std;

const int maxn = 1e7 + 1;

bool snt[maxn];

void sangnt()
{
	int i, j;
	for (i = 1; i <= maxn; i++)
		snt[i] = 1;
	snt[1] = 0;
	i = 2;
	while (i * i <= maxn)
	{
		while (snt[i] == 0)
			i++;
		for (j = 2; j * i <= maxn; j++)
			snt[i * j] = 0;
		i++;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	sangnt();
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		queue<int> q;
		map<int, int> path, visited;
		q.push(n);
		visited[n] = 1;
		path[n] = 0;
		while (!q.empty())
		{
			int u = q.front(); q.pop();
			if (u == 1)
			{
				cout << path[1] << endl;
				break;
			}
			if (!visited[u - 1])
			{
				q.push(u - 1);
				visited[u - 1] = 1;
				path[u - 1] = path[u] + 1;
			}
			for (int x = sqrt(u); x >= 2; x--)
			{
				if (u % x == 0)
				{
					int x1 = u / x, v = max(x, x1);
					if (!visited[v])
					{
						q.push(v);
						path[v] = path[u] + 1;
						visited[v] = 1;
					}
				}
			}
		}
	}
}