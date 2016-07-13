#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>
#include<cmath>
#define ll long long
#define INF 1000000007
using namespace std;
int a[2002];
int dp[2002][2002];

int calc(int year,int lo,int hi)
{
	if(lo>hi)
	return 0;
	if(dp[lo][hi]!=-1)
	return dp[lo][hi];
	return dp[lo][hi]=max(calc(year+1,lo+1,hi)+a[lo]*year,calc(year+1,lo,hi-1)+a[hi]*year);
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	memset(dp,-1,sizeof(dp));
	int ans=calc(1,0,n-1);
	printf("%d\n",ans);
	return 0;
}
