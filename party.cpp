#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int fun[1003],price[1003];
int dp[103][503];
int main()
{
	while(1)
	{	
		int W,n;
		scanf("%d%d",&W,&n);
		if(n==0 && W==0)
		break;
		for(int i=1;i<=n;i++)
		{
			scanf("%d%d",&price[i],&fun[i]);
		}
		for(int i=0;i<=n;i++)
		{
			dp[i][0]=0;
		}
		for(int i=0;i<=W;i++)
		{
			dp[0][i]=0;
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=W;j++)
			{
				dp[i][j]=dp[i-1][j];
				if(j>=price[i])
				{
					dp[i][j]=max(dp[i][j],fun[i]+dp[i-1][j-price[i]]);
				}
			}
		}
		int x;
		int j=W;
		while(j && dp[n][W]==dp[n][j])
		{
			j--;
		}
		
		
		printf("%d %d\n",j+1,dp[n][W]);
	}
	return 0;
}
