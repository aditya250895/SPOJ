#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;

ll calc(ll n,ll m)
{
	if(n-m>m)
	{
		m=n-m;
	}
	ll ans=1;
	for(int i=m+1;i<=n;i++)
	{
		ans*=i;
		ans/=(i-m);
	}
	return ans;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n,m;
		scanf("%lld%lld",&n,&m);
		ll ans=calc(n-1,m-1);
		printf("%lld\n",ans);
	
	}
	int xx;
	scanf("%d",&xx);
	return 0;

}
