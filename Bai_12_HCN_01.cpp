#include<bits/stdc++.h>

using namespace std;

#define forn(i,n)   for(i = 0;i<n;i++)
#define for1(i,n)   for(i = 1;i<=n;i++)

int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        int r, c;
        scanf("%d%d",&r,&c);
        int b[r][c],i,j, ans = 0, f[r][c];
        memset(f,0,sizeof(f[0][0]) * r * c);
        forn(i,r)
            forn(j,c)
            {
                scanf("%d",&b[i][j]);
                if(b[i][j] == 0)
                    f[i][j] = 0;
                else
                {
                    if(i == 0)
                        f[i][j] = 1;
                    else f[i][j] = f[i-1][j]+1;
                }
            }
        forn(i,r)
        {
            vector<int> a;
            forn(j,c)
                a.push_back(f[i][j]);
            stack<int> d;
            int n = a.size(),k, l[n],r[n];
            forn(k,n)
            {
                while(!d.empty() && a[d.top()] >= a[k])
                    d.pop();
                if(d.empty())
                    l[k] = -1;
                else l[k] = d.top();
                d.push(k);
            }
            while(!d.empty())
                d.pop();
            for(k = n-1;k>=0;k--)
            {
                while(!d.empty() && a[d.top()] >= a[k])
                    d.pop();
                if(d.empty())
                    r[k] = n;
                else r[k] = d.top();
                d.push(k);
            }
            forn(k,n)
                ans = max(ans, a[k] * (r[k] - l[k] - 1));
        }
        cout<<ans<<endl;
    }
    return 0;
}