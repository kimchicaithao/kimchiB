#include<bits/stdc++.h>

using namespace std;

const int maxCnt = 1e5; 

vector<string> ans;

int mod(string s, int n)
{
    int r = 0;
    for(int i = 0;i<s.size();i++)
    {
        r = r * 10 + (s[i] - '0');
        r%=n;
    }
    return r;
}

string solve(int n)
{
    queue<string> q;
    map<int,int> visited;

    string t = "1";
    q.push(t);
    while(!q.empty())
    {
        auto u = q.front();q.pop();
        int rem = mod(u, n);
        if(rem == 0)
            return u;
        else if(!visited[rem])
        {
            visited[rem] = 1;
            q.push(u + "0");
            q.push(u + "1");
        }
    }
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie();
    int t,k;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
        cout<<solve(n)<<endl;
    }
    return 0;
}