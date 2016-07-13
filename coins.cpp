#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<map>
#define ll long long
using namespace std;
map<ll,ll>m;
ll calc(ll n)
{
	if(n==0)
	return 0;
	if(m[n]!=0)
	return m[n];
	return m[n]=max(n,calc(n/2)+calc(n/3)+calc(n/4));
}
int main()
{
	ll n;
	while(scanf("%lld",&n)==1)
	{
	ll x=calc(n);
	printf("%lld\n",x);
}
	return 0;
}
