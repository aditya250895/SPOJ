#include<bits/stdc++.h>
#define ll long long
ll n;
ll a[10000006];
ll MAX=10000004;
ll query(ll n)
{
	ll ans=0;
	while(n>0)
	{
		ans+=a[n];
		n-=(n&-n);
	}
	return ans;
}

void update(int n)
{
	while(n<=MAX)
	{
		a[n]++;
		n+=(n&-n);
	}
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		memset(a,0,sizeof(a));
		printf("\n");
		scanf("%lld",&n);
		ll x,sum=0;
		for(ll i=0;i<n;i++)
		{
			scanf("%lld",&x);
			sum+=query(MAX)-query(x);
			update(x);
		}
		printf("%lld\n",sum);
	}
}
