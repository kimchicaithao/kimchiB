#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	deque<int> q;
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		if(s == "PUSHBACK")
		{
			int n;
			cin>>n;
			q.push_back(n);
		}
		else if(s == "PRINTFRONT")
		{
			if(!q.empty())
				cout<<q.front()<<endl;
			else cout<<"NONE\n";
		}
		else if(s == "POPFRONT")
		{
			if(!q.empty())
				q.pop_front();
		}
		else if(s == "PRINTBACK")
		{
			if(!q.empty())
				cout<<q.back()<<endl;
			else cout<<"NONE\n";
		}
		else if(s == "POPBACK")
		{
			if(!q.empty())
				q.pop_back();
		}
		else if(s == "PUSHFRONT")
		{
			int n;
			cin>>n;
			q.push_front(n);
		}
	}
	return 0;
}