#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		double n;
		scanf("%lf",&n);
		double ans=4*n*n+0.25;
		printf("Case %d: %.2lf\n",i,ans);
	}
	
	return 0;
}
