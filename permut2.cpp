#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==0)
		break;
		int a[n+1],ans[n+1];
		a[0]=0;ans[0]=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=1;i<=n;i++)
		{
			ans[a[i]]=i;
		}
		int flag=0;
		for(int i=0;i<=n;i++)
		{
			if(a[i]!=ans[i])
			{
				flag=1;
				break;
			}
			
		}
		if(flag==1)
		{
			printf("not ambiguous");
		}
		else
		{
			printf("ambiguous");
		}
		printf("\n");
	}
	// your code here

	return 0;
}
