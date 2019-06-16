#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int n;
	cin>>n;
	int a[n],i,j, min_idx, temp, buoc = 1;
	for(i = 0 ; i < n;i++)
		cin>>a[i];
    for (i = 0; i < n-1; i++) 
	{  
	    min_idx = i; 
	    for (j = i+1; j < n; j++) 
	        if (a[j] < a[min_idx]) 
	            min_idx = j;
	    swap(a[min_idx], a[i]);
	    cout<<"Buoc "<<buoc++<<": ";
	    for(j = 0 ; j<n;j++)
	        cout<<a[j]<<" ";
	    cout<<endl;       
	}     
	return 0;
}