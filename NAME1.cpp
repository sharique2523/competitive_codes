#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;

string a,b,c;
int arr[26];

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		int len = a.size();
		for(int i=0;i<len;i++)arr[a[i]-'a']++;
		len = b.size();
		for(int i=0;i<len;i++)arr[b[i]-'a']++;
		cin>>n;
		while(n--)
		{
			cin>>c;
			len = c.size();
			for(int i=0;i<len;i++)arr[c[i]-'a']--;
		}
		bool flag=false;
		for(int i=0;i<26;i++)
		{
			if(arr[i]<0)flag=true;
			arr[i]=0;
		}
		if(flag)cout<<"NO\n";
		else cout<<"YES\n";
	}
	return 0;
}
