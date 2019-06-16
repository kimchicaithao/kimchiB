#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int t;
	cin>>t;
	while(t--)
	{
		string p, t;
		cin>>p>>t;
		if(p.find(t)!=string::npos)
			cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}