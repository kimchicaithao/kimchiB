#include<bits/stdc++.h>

using namespace std;


const int maxn = 1e5 + 5;

int n, a[maxn], y, q;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    cin>>n;
    int i,j;
    for(i = 0;i<n;i++)
        cin>>a[i];
    random_shuffle(a,a+n);
    sort(a,a+n);
    cin>>q;
    while(q--)
    {
        cin>>y;
        auto id = upper_bound(a,a+n,y) - a;
        cout<<id<<endl;
    }
    return 0;
}