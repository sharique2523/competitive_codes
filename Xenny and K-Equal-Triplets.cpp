#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    //cout << "Hello World!" << endl;
    int t,n,k,x;
    long long int cnt , num;
    cin>>t;
    while(t--)
    {
    	scanf("%d%d",&n,&k);
    	cnt = 0;
    	for(int i=0;i<n;i++)
    	{
    		scanf("%d",&x);
    		if(x==k)cnt++;
    	}
    	long long int temp1,temp2;
    	temp1 = cnt;
    	temp2 = n;
    	cnt = cnt-2;
    	n = n - 2;
    	temp1 = temp1 * (temp1-1) * cnt;
    	temp2 = temp2 * (temp2-1) * n;
    	cnt = __gcd(temp1,temp2);
    	temp1 = temp1 / cnt;
    	temp2 = temp2 / cnt;
    	cout<<temp1<<"/"<<temp2<<endl;
    }
    return 0;
}

