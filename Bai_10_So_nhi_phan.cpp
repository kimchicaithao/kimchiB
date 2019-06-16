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
		int n;
		cin>>n;
		for(int i = 1;i<=n;i++)
		{
			string s = bitset<16>(i).to_string();
			cout<<s.substr(s.find_first_of('1'))<<" ";
		}
		cout<<endl;
	}
	return 0;
}