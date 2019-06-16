#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int n;
	cin>>n;
	int i,j, a[n],k, b = 1;
	for(i = 0;i<n;i++)
		cin>>a[i];
	for(i = 0;i<n-1;i++)
	{
		for(j = i+1;j<n;j++)
		{
			if(a[i] > a[j])
				swap(a[i],a[j]);
		}
		cout<<"Buoc "<<b++<<": ";
		for(k = 0;k<n;k++)
			cout<<a[k]<<" ";
		cout<<endl;
	}
	return 0;
}