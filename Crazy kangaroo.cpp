#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
typedef long long int lli;

int main()
{
	int t;
	cin>>t;
	lli a,b,m,cnt;
	while(t--)
	{
		cnt = 0;
		cin>>a>>b>>m;
		lli temp = a%m;
		if(temp!=0)temp = m-temp;
		a = a + temp;
		temp = b%m;
		b = b - temp;
		temp = (b - a)/m;
		temp = temp + 1;
		cout<<temp<<endl; 
	}
	return 0;
}
