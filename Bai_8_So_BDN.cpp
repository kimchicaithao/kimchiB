// Source : Sơn Khương - ITPTIT
#include <iostream>
 
using namespace std;
 
int t, a[20], x;
unsigned long long n, dem;
 
void Res()
{
	unsigned long long s=0;
    for(int i=0;i<x;i++)
        s=s*10+a[i];
    if(s!=0 && s<=n) dem++;
}
 
void Try(int i)
{
    for(int j=0;j<=1;j++)
    {
        a[i]=j;
        if(i==x-1)	Res();
        else	Try(i+1);
    }
}
 
int main()
{
    cin>>t;
    while(t--)
    {
    	cin>>n;
    	x=0;
    	dem=0;
    	unsigned long long a=n;
    	while(a!=0)
    	{
    		x++;
    		a=a/10;
		}
    	Try(0);
    	cout<<dem<<endl;
	}
}