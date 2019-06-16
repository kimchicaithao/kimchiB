#include<bits/stdc++.h>

using namespace std;

int count(int n)
{
	int counter = 0,i;
	for(i = 1;i*i<=n;i++)
	{
		if(n%i == 0)
		{
			if(i%2 == 0)
				counter++;
			if(i!=n/i && (n/i)%2 == 0)
				counter++;
		}
	}
	return counter;
}


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
		cout<<count(n)<<endl;
	}
	return 0;
}