#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[100005];
int n,m;

int f(int x)
{
	int ans=1;
	int posi=a[1];
	for(int i=2;i<=n;i++)
	{
		if(a[i]-posi>=x)
		{
		ans++;
		if(ans==m)
			return 1;
		posi=a[i];
		}
	
	}
	return 0;
}


int b_search()
{
	int lo=0,hi=a[n],mid;
	while(lo<hi)
	{
		mid=lo+(hi-lo)/2;
		if(f(mid)==1)
		{
			lo=mid+1;
		}
		else
		{
			hi=mid;
		}
	}
	return lo-1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a+1,a+n+1);
		int ans=b_search();
		printf("%d\n",ans);
	}
	
	return 0;
}
