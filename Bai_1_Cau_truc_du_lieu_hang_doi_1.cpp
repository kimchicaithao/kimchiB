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
		vector<int> store;
		int n;
		cin>>n;
		while(n--)
		{
			int q;
			cin>>q;
			if(q == 1)
				cout<<store.size()<<endl;
			else if(q == 2)
			{
				if(store.empty())
					cout<<"YES\n";
				else cout<<"NO\n";
			}
			else if(q == 3)
			{
				int num;
				cin>>num;
				store.emplace_back(num);
			}
			else if(q == 4)
			{
				if(!store.empty())
					store.erase(store.begin());
			}
			else if(q == 5)
			{
				if(!store.empty())
					cout<<store[0]<<endl;
				else cout<<-1<<endl;
			}
			else if(q == 6)
			{
				if(!store.empty())
					cout<<store.back()<<endl;
				else cout<<-1<<endl;
			}

		}
	}
	return 0;
}