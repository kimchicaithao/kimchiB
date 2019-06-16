#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int t;
    cin>>t;
    while(t--)
    {
    	int n,k;
    	cin>>n>>k;
    	int i,j,l;
    	long long ans[n+1][k+1];
    	memset(ans,0,sizeof(ans));
    	for(i = 1;i<=min(9,k);i++)
    		ans[1][i] = 1;
    	for(i = 2;i<=n;i++)
    		for(j = 1;j<=k;j++)
    			for(l = 0;l<10;l++)
    				if(j - l >=0)
    					ans[i][j]+= ans[i-1][j-l]%mod;
    	long long finalAns = (ans[n][k] + mod)%mod;
    	cout<<finalAns<<endl;
    }
	return 0;
}