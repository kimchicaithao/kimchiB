#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie();
    int n,k;
    cin>>n>>k;
    int a[n][n],i,j;
    vector<int> permutation;
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<n;j++)
            cin>>a[i][j];
        permutation.emplace_back(i);
    }
    vector<vector<int>> ans;
    do{
    	int temp = 0;
    	for(i = 0;i<n;i++)
    		temp+=a[i][permutation[i]];
    	if(temp == k)
    		ans.emplace_back(permutation);
    }
    while(next_permutation(begin(permutation), end(permutation)));
    cout<<ans.size()<<endl;
    for(auto i:ans)
    {
        for(auto j:i)
            cout<<j + 1<<" ";
        cout<<endl;
    }
    return 0;
}