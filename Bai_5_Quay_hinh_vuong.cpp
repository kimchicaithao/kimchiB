#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int i,j;
	vector<int> start(6), final(6);
    for(i = 0;i<6;i++)
        cin>>start[i];
    for(i = 0;i<6;i++)
        cin>>final[i];
    queue<vector<int>> q;
    q.push(start);
    map<vector<int>,int> ans, visited;
    ans[start] = 0;
    while(!q.empty())
    {
        auto u = q.front();
        if(u == final)
        {
            cout<<ans[u];
            break;
        }
        q.pop();
        auto tmpA = u, tmpB = u;
        tmpA[1] = u[4]; tmpA[2] = u[1];tmpA[4] = u[5];tmpA[5] = u[2];
        tmpB[0] = u[3]; tmpB[1] = u[0];tmpB[3] = u[4];tmpB[4] = u[1];
        if(visited[tmpA] == 0)
        {
            visited[tmpA] = 1;
            q.push(tmpA);
            ans[tmpA] = ans[u] + 1;
        }
        if(visited[tmpB] == 0)
        {
            visited[tmpB] = 1;
            q.push(tmpB);
            ans[tmpB] = ans[u] + 1;
        }
    }
	return 0;
}