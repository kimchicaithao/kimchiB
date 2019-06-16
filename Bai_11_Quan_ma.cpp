#include<bits/stdc++.h>

using namespace std;

void solve()
{
	int t;
	cin>>t;
	int dr[] = {-2,-2,-1,-1,1,1,2,2},
		dc[] = {-1,1,-2,2,-2,2,-1,1};
	while(t--)
	{
		char r1, c1, r2, c2;
		cin>>r1>>c1>>r2>>c2;
		queue<pair<char,char>> q;
		map<pair<char,char>,int> path, visited;
		q.push({r1,c1});
		path[{r1,c1}] = 0;
		visited[{r1,c1}] = 1;
		while(!q.empty())
		{
			auto u = q.front();q.pop();
			if(u.first == r2 && u.second == c2)
			{
				cout<<path[u]<<endl;
				break;
			}
			for(int i = 0;i<8;i++)
			{
				char x = u.first + dr[i], y = u.second + dc[i];
				if(x >= 'a' && y >= '1' && x <= 'h' && y <= '8' && !visited[{x,y}])
				{
					path[{x,y}] = path[u] + 1;
					q.push({x,y});
					visited[{x,y}] = 1;
				}
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	//freopen("input.txt","r",stdin);
	solve();
	return 0;
}