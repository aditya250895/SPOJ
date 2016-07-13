#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long
using namespace std;

ll breaksq(ll n)
{
	ll ans=0;
	ll x;
	while(n)
	{
		x=n%10;
		ans+=x*x;
		n/=10;
	}
	return ans;
}

int main()
{
	ll n;
	scanf("%lld",&n);
	ll ans=breaksq(n);
	ll count=1;
	n=ans;
	ll flag=0;
	while(n!=1)
	{
		n=breaksq(n);
		count++;
		if(n==ans || count>10000)
		{
			printf("-1\n");
			flag=1;
			break;
		}
		
		
	}
	if(flag==0)
	printf("%lld\n",count);
	return 0;
}
