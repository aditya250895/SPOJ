#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll n,m;
		scanf("%lld%lld",&n,&m);
		if(m==0)
		printf("Airborne wins.\n");
		else
		printf("Pagfloyd wins.\n");
	}
	return 0;
}
