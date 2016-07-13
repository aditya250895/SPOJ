#include <iostream>
#include<cstdio>
#include<algorithm>
#include<limits.h>
using namespace std;

void knapsack(int p[],int w[],int f,int n)
{
	int k[10005];
	for(int i=0;i<10005;i++)
	{
		k[i]=INT_MAX;
	}
	for(int i=1;i<=f;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==w[j])
			{
				k[i]=min(k[i],p[j]);
			}
			else if(i>w[j] && k[i-w[j]]!=INT_MAX)
			{
				k[i]=min(k[i],p[j]+k[i-w[j]]);
			}
		}
	}
	if(k[f]!=INT_MAX)
	{
		printf("The minimum amount of money in the piggy-bank is %d.\n",k[f]);
	}
	else
	{
		printf("This is impossible.\n");
	}
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int e,f,n;
		int p[505],w[505];
		scanf("%d%d%d",&e,&f,&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d%d",&p[i],&w[i]);
		}
		knapsack(p,w,f-e,n);
	}
	// your code here

	return 0;
}
