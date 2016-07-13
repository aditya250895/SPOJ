#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	long long n,m;
	scanf("%lld %lld",&n,&m);
	long long a[n+1];
	for(long long i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	long long max=0,j=0,ans=0;
	for(long long i=0;i<n;i++)
	{
		if(max>ans && max<m)
		{
			ans=max;
		}
		max=max+a[i];
		if(max==m)
		{
			ans=max;
			break;
		}
		else
		{
			while(max>m)
			{
				max-=a[j];
				j++;
				if(max==m)
				{
					ans=max;
					break;
				}
			}
		}
	}
	printf("%lld\n",ans);
	// your code here

	return 0;
}
