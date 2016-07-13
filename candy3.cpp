#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<map>
#define ll unsigned long long 
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		printf("\n");
		ll n;
		scanf("%llu",&n);
		ll x,sum=0;
		for(ll i=0;i<n;i++)
		{
			scanf("%llu",&x);
			sum=(sum+x)%n;
		}
		if(sum==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
