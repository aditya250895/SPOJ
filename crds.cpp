#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<algorithm>
#define ll long long
#define MOD 1000007
using namespace std;
ll a[1000006];
int main()
{
	a[1]=2;
	for(ll i=2;i<=1000000;i++)
	{
		a[i]=(a[i-1]+(i-1)+(i*2))%MOD;
	}
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		printf("%lld\n",a[n]);	
	}
	
	return 0;
}
