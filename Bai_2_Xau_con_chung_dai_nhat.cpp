#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int solve(string s1, string s2)
{
    vector<vi> table(s1.size() + 1, vector<int>(s2.size() + 1));
    table[0][0] = 0;
    int i,j;
    for(i = 1;i<=s1.size();i++)
        table[0][i-1] = 0;
    for(i = 1;i<=s2.size();i++)
        table[i-1][0] = 0;
    for(i = 1;i<=s2.size();i++)
    {
        for(j = 1;j<=s1.size();j++)
            if(s2[i-1] == s1[j-1])
                table[i][j] = table[i-1][j-1] + 1;
            else table[i][j] = max(table[i-1][j], table[i][j-1]);
    }
    return table[s2.size()][s1.size()];
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<solve(s1,s2);
    return 0;
}