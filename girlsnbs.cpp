#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	while(1)
	{
		int n,m,x;
		scanf("%d%d",&n,&m);
		if(n==-1)
		break;
		if(n==0 && m==0)
		{
			printf("0\n");
		}
		else if(n==m)
		{
			printf("1\n");
		}
		else
		{
			if(n>m)
			{
				x=(n+m)/(m+1);
				printf("%d\n",x);
			}
			else if(m>n)
			{
				x=(n+m)/(n+1);
				printf("%d\n",x);
			}
		}
		
		
		
	}
	// your code here

	return 0;
}
