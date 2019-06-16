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
    	int test;
    	string number;
    	cin>>test>>number;
    	if(next_permutation(number.begin(), number.end()))
    		cout<<test<<" "<<number<<endl;
    	else cout<<test<<" BIGGEST\n";
    }
    
    return 0;
}