#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i;
        cin>>n>>m;
        vector<int> a(n);
        for(i = 1;i<=n;i++)
            a[i-1] = i;
        int start = 0;
        while(a.size() >= 1)
        {
            int modulo = m%a.size();
            start+=modulo;
            if(start >= a.size())
                start-=a.size();
            int t1 = start;
            start++;
            if(start >= a.size())
                start = 0;
            else start--;
            a.erase(a.begin() + t1);
        }
        cout<<a[0]<<endl;
    }
    return 0;
}