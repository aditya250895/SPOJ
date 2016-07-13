#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<algorithm>
#include<vector>
#include<queue>
#define ll long long
#define MOD 1000007
using namespace std;

int a[101][101],b[101][101];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		memset(b,0,sizeof(b));
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			scanf("%d",&a[i][j]);
		}
		for(int i=0;i<m;i++)
		{
			b[0][i]=a[0][i];
		}
		for(int i=1;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(j==0)
				{
					b[i][j]=a[i][j]+max(b[i-1][j],b[i-1][j+1]);
				}
				else if(j==m-1)
				{
					b[i][j]=a[i][j]+max(b[i-1][j],b[i-1][j-1]);
				}
				else
				{
					b[i][j]=a[i][j]+max(b[i-1][j],max(b[i-1][j-1],b[i-1][j+1]));
				}
			}
		}
		int ans=0;
		for(int j=0;j<m;j++)
		{
			ans=max(ans,b[n-1][j]);
		}
		printf("%d\n",ans);
		
	}
	return 0;
}
