#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	string s;
	while(cin>>s)
	{
		int stt = 1;
		stack<int> index;
		for(auto i:s)
		{
			if(i == '(')
			{
				cout<<stt<<" ";
				index.push(stt++);
			}
			else if(i == ')')
			{
				cout<<index.top()<<" ";
				index.pop();
			}
		}
		cout<<endl;
	}
	
	return 0;
}