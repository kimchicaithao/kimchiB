#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int n,s;
    cin>>n>>s;
    int a[n],i, l[s+1],j;
    l[s] = 0;l[0] = 1;
    for(i = 0;i<n;i++)
    	cin>>a[i];
    for(i = 0;i<n;i++)
    {
    	for(j = s;j>=a[i];j--)
    		if(l[s] == 0 && l[j - a[i]] == 1)
    			l[j] = 1;
    }
    if(l[s] == 1)
    	cout<<"YES";
    else cout<<"NO";
	return 0;
}