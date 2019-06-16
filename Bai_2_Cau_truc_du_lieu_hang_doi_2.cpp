#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	queue<int> q;
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(s == "PUSH")
		{
			int n;
			cin>>n;
			q.push(n);
		}
		else if(s == "POP")
		{
			if(!q.empty())
				q.pop();
		}
		else if(s == "PRINTFRONT")
		{
			if(!q.empty())
				cout<<q.front()<<endl;
			else cout<<"NONE\n";
		}
	}	
	return 0;
}