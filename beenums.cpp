#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<algorithm>
#define ll long long
#define MOD 1000007
using namespace std;
int main()
{
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==-1)
		break;
		int ans=1;
		if(n==1)
		{
			printf("Y\n");
			continue;
		}
		for(int i=1;;i++)
		{
			ans=ans+(6*i);
			if(ans>=n)
			break;
		}
		if(ans==n)
		{
			printf("Y\n");
		}
		else
		{
			printf("N\n");
		}
	}
	return 0;
}
