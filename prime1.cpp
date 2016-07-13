#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;


bool isprime(ll n)
{
	if(n==1)
	return 0;
	if(n==2)
	return 1;
	if(n==3)
	return 1;
	ll sq=sqrt(n);
	if(n%2==0)
	return 0;
	for(ll i=3;i<=sq;i+=2){
		if(n%i==0)
		return 0;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n,m;
		scanf("%lld%lld",&n,&m);
		if(n<2 && m>=2)
		n=2;
		
		for(ll i=n;i<=m;i++)
		{
			if(isprime(i)==1)
			{
				printf("%lld\n",i);
			}
		}
	printf("\n");
	}
	return 0;
}
