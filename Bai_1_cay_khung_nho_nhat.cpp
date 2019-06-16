#include<bits/stdc++.h>

using namespace std;

class UnionFind{
private:
	vector<int> p, rank;
public:
	UnionFind(int n)
	{
		rank.assign(n + 1,0);
		p.assign(n + 1,0);
		for(int i = 1;i<=n;i++)
			p[i] = i;
	}
	int findSet(int i)
	{
		return (p[i] == i) ? i : (p[i] = findSet(p[i]));
	}
	int unionSet(int i,int j)
	{
		int x = findSet(i), y = findSet(j);
		if(x == y)
			return 0;
		if(rank[x] == rank[y])
			rank[x]++;
		if(rank[x] < rank[y])
			p[x] = y;
		else p[y] = x;
		return 1;
	}
};

typedef struct Edge 
{
	int u, v,w;
} Edge;

bool operator < (const Edge &a, const Edge &b)
{
	return a.w < b.w;
}

void solve()
{
	int t;
	cin>>t;
	while(t--)
	{
		int v,e;
		cin>>v>>e;
		vector<Edge> edge(e);
		int i,j;
		UnionFind UF(v);
		long long ans = 0;
		for(i =0;i<e;i++)
			cin>>edge[i].u>>edge[i].v>>edge[i].w;
		sort(edge.begin(), edge.begin() + i);
		for(auto x:edge)
			if(UF.unionSet(x.u, x.v))
				ans+= x.w;
		cout<<ans<<endl;
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