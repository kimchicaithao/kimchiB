#include<bits/stdc++.h>

using namespace std;

#define maxn 10001

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    int k,n,m;
    cin>>k>>n>>m;
    int pos[k],i,j,ans = 0;
    map<int,int> counter;
    map<int,vector<int>> adjList;
    for(i = 0;i<k;i++)
    {
        cin>>pos[i];
        counter[pos[i]]++;
    }
    for(i = 0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adjList[a].emplace_back(b);
    }
    for(i = 0;i<k;i++)
    {
        queue<int> q;
        q.push(pos[i]);
        map<int,int> visited;
        while(!q.empty())
        {
            int u = q.front();
            visited[u] = 1;
            q.pop();
            for(auto j:adjList[u])
            {
                if(visited[j] == 0)
                {
                    counter[j]++;
                    visited[j] = 1;
                    q.push(j);
                }
            }
        }
    }
    for(i = 1;i<=n;i++)
        if(counter[i] == k)
            ans++;
    cout<<ans;
    return 0;
}