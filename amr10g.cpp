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
int a[100005];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		if(m==1)
		{
			printf("%d\n",0);
			continue;
		}
		sort(a,a+n);
		m--;
		int min=1000000000;
		for(int i=m;i<n;i++)
		{
			if(a[i]-a[i-m]<min)
			{
				min=a[i]-a[i-m];
			}
		}
		printf("%d\n",min);
	}
	return 0;
}
