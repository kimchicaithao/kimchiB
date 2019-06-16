#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int n;
	cin>>n;
	int a[n], lis[n],i,j;
	for(i = 0;i<n;i++)
	{
		cin>>a[i];
		lis[i] = 1;
	}
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<i;j++)
			if(a[i] > a[j])
				lis[i] = max(lis[i], lis[j] + 1);
	}
	cout<<*max_element(lis, lis + n);
	return 0;
}