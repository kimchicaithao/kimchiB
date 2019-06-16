#include<bits/stdc++.h>

using namespace std;

map<int,int> factors(int n)
{
    map<int,int> ans;
    int i,j;
    for(i = 2;i*i<=n;i++)
    {
        if(n%i == 0)
        {
            while(n%i == 0)
            {
                ans[i]++;
                n/=i;
            }
        }
    }
    if(n!=1)
        ans[n] = 1;
    return ans;
}

bool checkPrime(int n)
{
    for(int i = 2;i*i<=n;i++)
        if(n%i == 0)
            return 0;
    return 1;
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie();
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        map<int,int> Factors = factors(n);
        vector<long long> first;
        for(auto i:Factors)
            first.emplace_back(round(pow(i.first,i.second)));
        vector<vector<long long>> allWay;
        queue<vector<long long>> q;
        q.push(first);
        while(!q.empty())
        {
            auto u = q.front();q.pop();
            allWay.emplace_back(u);
            for(i = 0; i < u.size();i++)
            {
                for(j = 2 ;j*j<=u[i];j++)
                {
                    if(u[i]%j == 0)
                    {
                        auto u1 = u;
                        u1.erase(u1.begin() + i);
                        u1.emplace_back(j);
                        u1.emplace_back(u[i]/j);
                        q.push(u1);
                    }
                }
            }
        }
        for(auto &i:allWay)
            sort(i.begin(), i.end(), greater<int>());
        long long ans = LLONG_MAX;
        for(auto i:allWay)
        {
            int prime = 2;
            long long temp = 1;
            for(auto j:i)
            {
                while(!checkPrime(prime))
                    prime++;
                temp*= round(pow(prime,j-1));
                prime++;
            }
            if(temp > 0)
                ans = min(ans,temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}