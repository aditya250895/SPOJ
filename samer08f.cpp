#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;
int main()
{
	while(1)
	{
		ll n;
		scanf("%lld",&n);
		if(n==0)
		break;
		ll ans=0;
		for(ll i=1;i<=n;i++)
		{
			ans+=i*i;
		}
		printf("%lld\n",ans);
	}
	return 0;
}
