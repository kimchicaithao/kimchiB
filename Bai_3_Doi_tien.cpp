#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	
	int coins[] = {1000,500,200,100,50,20,10,5,2,1};
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i = 0, ans = 0;
		while(n)
		{
			while(coins[i] > n)
				i++;
			int amount = n/coins[i];
			ans+= amount;
			n-= amount * coins[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
