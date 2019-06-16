#include<bits/stdc++.h>

using namespace std;

long long fibo[93];

void calcFibo()
{
	fibo[1] = 1; fibo[2] = 1;
	for(int i = 3;i<=92;i++)
		fibo[i] = fibo[i-2] + fibo[i-1];
}

char fiboChar(int n, long long k)
{
	if(n == 1)
		return 'A';
	if(n == 2)
		return 'B';
	if(k > fibo[n-2])
		return fiboChar(n-1, k - fibo[n-2]);
	return fiboChar(n-2, k);
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie();
	calcFibo();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long long k;
		cin>>n>>k;
		cout<<fiboChar(n,k)<<endl;
	}
	return 0;
}
