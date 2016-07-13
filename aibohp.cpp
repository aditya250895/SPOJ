#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
char s[6200];
int dp[6105][6105];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		int n=strlen(s);
		for(int i=0;i<=n;i++)
		{
			dp[0][i]=dp[i][0]=0;
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(s[i-1]==s[n-j])
				{
					dp[i][j]=dp[i-1][j-1]+1;
				}
				else
				dp[i][j]=max(max(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
			}
		}
		printf("%d\n",n-dp[n][n]);
	}
	
	return 0;
}
