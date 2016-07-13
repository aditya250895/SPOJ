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
int main()
{
	while(1)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		if(n==0 && m==0)
		break;
		int min=10000000,x;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&x);
			if(x<min)
			{
				min=x;
			}
		}
		int count=0;
		for(int i=0;i<m;i++)
		{
			scanf("%d",&x);
			if(x<=min)
			count++;
		}
		if(count>=2)
		{
			printf("N\n");
		}
		else
		printf("Y\n");
	}
	return 0;
}
