#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long
using namespace std;
ll a[100005];
int main()
{
	ll n;
	scanf("%lld",&n);
	if((n&(n-1))==0)
	printf("TAK\n");
	else
	printf("NIE\n");
	int xx;
	scanf("%d",&xx);
	return 0;
}
