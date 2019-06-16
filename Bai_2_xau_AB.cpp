#include<bits/stdc++.h>

using namespace std;

bool check(string s, int k )
{
	string pattern(k,'A');
	if(s.find(pattern) == string::npos)
		return 0;
	int index = s.find(pattern);
	if(s.find(pattern,index + 1) !=string::npos)
		return 0;
	return 1;
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie();
    int n,k;
    cin>>n>>k;
    set<string> ans;
    string s(n,'B');
    if(check(s,k))
    	ans.insert(s);
    while(count(s.begin(), s.end(),'A')!=s.size())
    {
    	int i = s.size() - 1;
    	while(s[i] == 'A')
    	{
    		s[i] = 'B';
    		i--;
    	}
    	s[i] = 'A';
    	if(check(s,k))
    		ans.insert(s);
    }
    if(check(s,k))
    	ans.insert(s);
    cout<<ans.size()<<endl;
    set<string>::iterator it;
    for(it = ans.begin(); it!= ans.end();it++)
        cout<<*it<<endl;
    return 0;
}