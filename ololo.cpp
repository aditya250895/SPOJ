#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>
#define ll long long
#define MOD 1000007
using namespace std;
int main()
{
	int n,x;
	scanf("%d",&n);
	int ans=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		ans=ans^x;
	}
	printf("%d\n",ans);
	return 0;
}
