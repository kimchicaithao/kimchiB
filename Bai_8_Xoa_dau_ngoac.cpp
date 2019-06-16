#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	string s;
	cin >> s;
	set<string> ans;
	queue<string> q;
	map<string, int> visited;
	visited[s] = 1;
	q.push(s);
	while (!q.empty())
	{
		string u = q.front();
		q.pop();
		int i, n = u.size();
		int allPair[n] = {0};
		vector<int> indexBegin;
		for(i = 0;i<n;i++)
		{
			if(u[i] == '(')
				indexBegin.push_back(i);
			else if(u[i] == ')')
			{
				allPair[indexBegin.back()] = i;
				indexBegin.pop_back();
			}
		}
		for(i = 0;i<n;i++)
		{
			if(allPair[i])
			{
				string t = u;
				t.erase(i,1);
				t.erase(allPair[i] -1 , 1);
				if(visited[t] == 0){
					ans.insert(t);
					visited[t] = 1;
					q.push(t);
				}
			}
		}
	}
	string t = "";
    int i, n = s.size();
    for(i = 0;i<n;i++)
        if(s[i]!=')' && s[i]!='(')
            t+= s[i];
	ans.insert(t);
    set<string>::iterator it;
    for(it = ans.begin(); it!=ans.end();it++)
        cout<<*it<<endl;
	return 0;
}
 