#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,D,x,count=0;
		scanf("%d%d%d",&n,&m,&D);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&x);
			while(x-D>0)
			{
				count++;
				x-=D;
			}
		}
		if(count>=m)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	// your code here

	return 0;
}
