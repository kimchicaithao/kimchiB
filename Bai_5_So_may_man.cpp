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
		int i,j, flag = 0;
		for(i = n/7;i>=0;i--)
		{
			int numFour = n - i * 7;
			if(numFour%4 == 0)
			{
				for(j = 0;j<numFour/4;j++)
					cout<<"4";
				for(j = 0;j<i;j++)
					cout<<"7";
				flag = 1;
				cout<<endl;
				break;
			}
		}
		if(!flag)
			cout<<"-1\n";
	}
	return 0;
}