#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	string s;
	while(cin>>s)
	{
		reverse(begin(s),end(s));
		cout<<s<<" ";
	}
	return 0;
}