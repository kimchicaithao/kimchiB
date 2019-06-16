#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	string s;
	string opera = "+-*/";
	while(getline(cin,s))
	{
		stack<string> st;
		string ans = "";
		reverse(begin(s), end(s));
		for(auto i:s)
		{
			if(opera.find(i)!=string::npos)
			{
				string s1 = st.top();st.pop();
				string s2 = st.top();st.pop();
				string s3 = s1  + s2 + i;
				st.push(s3);
			}
			else st.push(string(1,i));
		}		
		cout<<st.top()<<endl;
	}
	return 0;
}
