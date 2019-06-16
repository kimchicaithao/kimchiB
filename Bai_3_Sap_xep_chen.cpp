#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int n;
    cin>>n;
    int i,j,k, temp;
    vector<int> a(n);
    for(auto &i:a)
    	cin>>i;
    i = 0;
    vector<int> b;
    int step = 0;
    while(i<n)
    {
    	if(b.empty())
    		b.emplace_back(a[i]);
    	else
    		b.insert(lower_bound(begin(b),end(b),a[i]),a[i]);
    	cout<<"Buoc "<<step++<<": ";
    	for(j = 0;j<b.size();j++)
    		cout<<b[j]<<" ";
    	i++;
    	cout<<endl;
    }
	return 0;
}