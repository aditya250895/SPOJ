#include<bits/stdc++.h>
using namespace std;
#define maxn 100010
char str[maxn];
int sa[maxn];
int rank[maxn];
int height[maxn];
int n;
bool cmp(int a,int b)
{
	if(a==b)
		return true;
	--a;--b;
	while(str[++a]==str[++b])
		;
	return str[a]<str[b];
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf(" %s",str);
		n=strlen(str);
		for(int i=0;i<n;++i)
			sa[i]=i;
		sort(sa,sa+n,cmp);
		for(int i=0;i<n;++i)
			rank[sa[i]]=i;
		int h=0;
		height[0]=0;
		for(int i=0;i<n;++i)
		{
			if(rank[i]>0)
			{
				int k=sa[rank[i]-1];
				while(i+h<n&&k+h<n&&str[i+h]==str[k+h]) ++h;
				height[rank[i]]=h;
				if(h>0)
					--h;
			}
		}
		long long ans=n;
		ans*=(n+1);
		ans/=2;
		for(int i=0;i<n;++i)
			ans-=(long long )height[i];
		printf("%lld\n", ans);
	}
	return 0;
}		
