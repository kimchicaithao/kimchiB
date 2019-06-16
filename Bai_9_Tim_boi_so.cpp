#include<bits/stdc++.h>

using namespace std;

set<unsigned long long> num;

void preCalc()
{
	for(int i = 1;i<=25;i++)
	{
		for(int j = 0;j<=i;j++)
		{
			string s = string(j,'0') + string(i - j,'9');
			do{
				num.insert(stoull(s));
			}
			while(next_permutation(s.begin(),s.end()));
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie();
    preCalc();
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	for(auto i:num)
    		if(i >= n && i%n == 0)
    		{
    			cout<<i<<endl;
    			break;
    		}
    }
    return 0;
}