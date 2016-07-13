#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;

int modpow(int n,int m)
{
	int ans=1;
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
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		int x=modpow(n,m);
		printf("%d\n",x);
	}
	return 0;
}
