#include <iostream>
#include<cstdio>
#include<algorithm>
#include<limits.h>
using namespace std;
int A[102],dp[102][102];

int csum(int a,int b)
{
	int sum=0;
	for(int i=a;i<=b;i++)
	{
		sum+=A[i];
		sum=sum%100;
	}
	return sum;
}

int solve(int a,int b)
{
	if(a==b)
	{
		return 0;
	}
	if(dp[a][b]!=INT_MAX)
	{
		return dp[a][b];
	}
	int ret=dp[a][b];
	for(int k=a;k<b;k++)
	{
		int temp=solve(a,k)+solve(k+1,b)+csum(a,k)*csum(k+1,b);
	
		ret=min(ret,temp);
	}
	return (dp[a][b]=ret);
	
}

int main() {
	int n;
	while(cin>>n)
	{
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&A[i]);
		}
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=n;j++)
			{
				dp[i][j]=INT_MAX;
			}
		}
		printf("%d\n",solve(1,n));
	}
	// your code here

	return 0;
}
