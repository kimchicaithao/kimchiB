#include<bits/stdc++.h>

using namespace std;

map<int,int,greater<int>> res;

void convert(string s)
{
    string token;
    stringstream ss(s);
    while(ss>>token)
    {
        if(token!="+")
        {
            int heso = stoll(token.substr(0,token.find('*'))),
                mu = stoll(token.substr(token.find('^') + 1));
            res[mu]+=heso;
        }
    }
}

void solve()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        res.clear();
        string a, b;
        getline(cin,a);getline(cin,b);
        convert(a);convert(b);
        string ans = "";
        for(auto i:res)
            ans+= to_string(i.second) + "*x^" + to_string(i.first) + " + ";
        cout<<ans.substr(0,ans.size() - 3)<<endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
    solve();
    return 0;
}