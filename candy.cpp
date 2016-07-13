#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;
int a[10005];
int main()
{
	while(1)
	{
		ll n;
		scanf("%lld",&n);
		if(n==-1)
		break;
		int sum=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum+=a[i];
		}
		if(sum%n)
		{
			printf("-1\n");
			continue;
		}
		int x=sum/n;
		int ans=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]>x)
			{
				ans+=a[i]-x;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}
