#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int a[1001],b[1001];
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,min=1000000,sub;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&m);
		for(int i=0;i<m;i++)
		{
			scanf("%d",&b[i]);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				sub=abs(a[i]-b[j]);
				if(sub<min)
				{
					min=sub;
				}
				if(min==0)
				break;
			}
			if(min==0)
			break;
		}
		printf("%d\n",min);
	}
	// your code here

	return 0;
}
