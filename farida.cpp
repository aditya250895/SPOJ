#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#define ll long long
using namespace std;
ll a[100005],dp[100005];
int main()
{
	ll t;
	scanf("%lld",&t);
	for(ll k=1;k<=t;k++)
	{
		ll n;
		scanf("%lld",&n);
		for(ll i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		dp[0]=a[0];
		dp[1]=max(a[1],a[0]);
		for(ll i=2;i<n;i++)
		{
			dp[i]=max(dp[i-1],dp[i-2]+a[i]);
		}
		printf("Case %lld: %lld\n",k,dp[n-1]);
		
	}
	
	return 0;
}
