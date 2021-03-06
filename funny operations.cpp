#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int arr[17];

int main()
{
	int t,n,ans,mx_len;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=0;i<n;i++)cin>>arr[i];
		ans = mx_len = 0;
		int pow_len = pow(2.0 , n);
		//cout<<"\n no of subsets : "<<pow_len<<endl;
		int xor_v , and_v;
		for(int it=0;it<pow_len;it++)
		{
			bool first = true;
			int cnt = 0;
			for(int i=0;i<n;i++)
			{
				if(it & (1<<i))
				{
					cnt++;
					if(first)
					{
						xor_v = arr[i];
						and_v = arr[i];
						first = 0;
					}
					else
					{
						xor_v = xor_v ^ arr[i];
						and_v = and_v & arr[i];
					}
					int temp = xor_v | and_v;
				//	cout<<arr[i]<<" ";
					if(ans < temp)
					{
						ans = temp;
						mx_len = cnt;
					}	
					else if(ans==temp)
					{
						mx_len = max(mx_len , cnt);
					}
				}
			}
			//cout<<endl;
		}
		cout<<ans<<" "<<mx_len<<endl;
	}
	return 0;
}
