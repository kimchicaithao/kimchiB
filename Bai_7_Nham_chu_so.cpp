#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	string a,b;
	cin>>a>>b;
	string maxA = "", minA = "", maxB = "", minB = "";
	for(auto i:a)
	{
		if(i == '5')
			maxA+='6', minA+=i;
		else if(i == '6')
			minA+='5', maxA+=i;
		else
		{
			maxA+=i;
			minA+=i;
		}
	}
	for(auto i:b)
	{
		if(i == '5')
			maxB+='6', minB+=i;
		else if(i == '6')
			minB+='5', maxB+=i;
		else
		{
			maxB+=i;
			minB+=i;
		}
	}
	cout<<stoi(minA) + stoi(minB)<<" "<<stoi(maxA) + stoi(maxB);
	return 0;
}