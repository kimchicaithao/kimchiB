#include<bits/stdc++.h>

using namespace std;


set<long long> ans;

void pre()
{
	for(int i = 1;i<=18;i++)
	{
		for(int j = 0;j<=i;j++)
		{
			string s = string(j,'0') + string(i - j, '9');
			do{
				ans.insert(stoll(s));
			}
			while(next_permutation(begin(s),end(s)));
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie();
    int t,k;
    cin>>t;
    pre();
    while(t--)
    {
    	int n;
    	cin>>n;
        for(auto i:ans)
        {
            if(i>=n && i%n == 0)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}