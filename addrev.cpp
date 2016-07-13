#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int reverse(int n)
{
	int ans=0;
	while(n>0)
	{
		ans=ans*10+n%10;
		n/=10;
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
		int ans=reverse(n)+reverse(m);
		printf("%d\n",reverse(ans));
	}
}
