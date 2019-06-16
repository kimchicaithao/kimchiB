#include<bits/stdc++.h>

using namespace std;

const int maxn = 35;

int a[maxn],n, sum;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie();
    cin>>n>>sum;
    int i,j, ans = 0;
    for(i = 0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,greater<int>());
    i = 0;
    while(i < n && sum)
    {
        while(a[i] > sum)
            i++;
        sum-=a[i];
        ans++;
        i++;
    }
    cout<<ans;
    return 0;
}