#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#define MX 10005
using namespace std;
struct helix
{
	int val;
	int sum;
}a[MX],b[MX];
int main() {
	while(1)
	{
	int n,m;
	scanf("%d",&n);
	if(n==0)
	break;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i].val);
		sum+=a[i].val;
		a[i].sum=sum;
	}
	scanf("%d",&m);
	sum=0;
	for(int i=0;i<m;i++)
	{
		scanf("%d",&b[i].val);
		sum+=b[i].val;
		b[i].sum=sum;
	}
	a[n].val=MX;
	a[n].sum=a[n-1].sum+MX;
	b[m].val=MX;
	b[m].sum=b[m-1].sum+MX;
	int i=0,j=0,maxsum=0,ls1=0,ls2=0,ss1,ss2;
	while(i<=n && j<=m)
	{
		if(a[i].val < b[j].val)
		i++;
		else if(a[i].val > b[j].val)
		j++;
		else
		{
			ss1=a[i].sum-ls1;
			ss2=b[j].sum-ls2;
			if(ss1>ss2)
			{
				maxsum+=ss1;
			}
			else
			{
				maxsum+=ss2;
			}
			ls1=a[i].sum;
			ls2=b[j].sum;
			i++;
			j++;
		}
	}
	printf("%d\n",maxsum-MX);
	// your code here
	}
	return 0;
}
