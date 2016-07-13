#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#define ll unsigned long long
using namespace std;

ll modpow(ll n,ll m)
{
	if(n==0)
	return 0;
	ll ans=1;
	while(m)
	{
		if(m%2)
		ans=(ans*n)%10;
		n=(n*n)%10;
		m/=2;
	}
	return ans;
}
int main()
{
	int t;
	char s[1001];
	scanf("%d",&t);
	while(t--)
	{
		ll n,m;
		scanf("%s",s);
		int len=strlen(s);
		n=s[len-1]-'0';
		scanf("%llu",&m);
		printf("%llu\n",modpow(n%10,m));
	}
	return 0;
}
