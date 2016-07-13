#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n;
		scanf("%lld",&n);
		ll count=0;
		for(int i=5;i<=n;i*=5)
		{
			count+=n/i;
		}
		printf("%lld\n",count);
	}
	return 0;
}
