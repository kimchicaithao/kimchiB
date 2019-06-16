#include<bits/stdc++.h>

using namespace std;

bool check(string s, int k)
{
	return count(s.begin(), s.end(),'1') == k;
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie();
    
    int t;
    cin>>t;
    
    while(t--)
    {
    	int n,k;
	    cin>>n>>k;
	    set<string> ans;
	    string s(n,'0');
	    if(check(s,k))
	    	ans.insert(s);
	    while(count(s.begin(), s.end(),'1')!=s.size())
	    {
	    	int i = s.size() - 1;
	    	while(s[i] == '1')
	    		s[i--] = '0';
	    	s[i] = '1';
	    	if(check(s,k))
	    		ans.insert(s);
	    }
	    if(check(s,k))
	    	ans.insert(s);
	    for(auto i:ans)
	    	cout<<i<<endl;
    }
    
    return 0;
}
