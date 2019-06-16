#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

#define mp make_pair

void solve()
{
	int n;
	cin>>n;
	char a[n][n];
	int i,j;
	for(i = 0;i<n;i++)
		for(j = 0;j<n;j++)
			cin>>a[i][j];
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	map<pii,int> visited, path;
	queue<pii> q;
	q.push(mp(x1,y1));
	visited[mp(x1,y1)] = 1;
	path[mp(x1,y1)] = 0;
	int dr[] = {-1,0,0,1},dc[] = {0,-1,1,0};
	while(!q.empty())
	{
		pii u = q.front();
		q.pop();
		if(visited[{x2,y2}])
		{
			cout<<path[{x2,y2}];
			return;
		}
		int r1 = u.first + 1, r2 = u.first - 1, c1 = u.second + 1, c2 = u.second - 1;
		while(r1 < n && a[r1][u.second] == '.' && visited[{r1,u.second}] == 0)
		{
			visited[{r1,u.second}] = 1;
			path[{r1,u.second}] = path[u] + 1;
			q.push({r1,u.second});
			r1++;
		}
		while(r2 >= 0 && a[r2][u.second] == '.' && visited[{r2,u.second}] == 0)
		{
			visited[{r2,u.second}] = 1;
			path[{r2,u.second}] = path[u] + 1;
			q.push({r2,u.second});
			r2--;
		}
		while(c1 < n && a[u.first][c1] == '.' && visited[{u.first,c1}] == 0)
		{
			visited[{u.first,c1}] = 1;
			path[{u.first,c1}] = path[u] + 1;
			q.push({u.first,c1});
			c1++;
		}
		while(c2 >= 0 && a[u.first][c2] == '.' && visited[{u.first,c2}] == 0)
		{
			visited[{u.first,c2}] = 1;
			path[{u.first,c2}] = path[u] + 1;
			q.push({u.first,c2});
			c2--;
		}
	}
	cout<<-1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    solve();
    return 0;
}