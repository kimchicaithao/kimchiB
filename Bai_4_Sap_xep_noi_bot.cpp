#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	int n;
    cin>>n;
    int i,j,k, temp, buoc = 1;
    vector<int> a(n),b;
    for(auto &i:a)
    	cin>>i;
    bool flag;
    for(i = 0;i<n-1;i++)
    {
        flag = 0;
        for(j = 0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
                flag = 1;
            }
        }
        if(flag == 0)
            break;
        cout<<"Buoc "<<buoc++<<" : ";
        for(j = 0;j<n;j++)
            cout<<a[j]<<" ";
        cout<<endl;
        
    }
	return 0;
}