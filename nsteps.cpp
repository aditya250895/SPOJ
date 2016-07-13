#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		if(x==y|| x==y+2)
		{
			if(x%2==0 && y%2==0)
			{
				printf("%d\n",x+y);
			}
			else
			{
				printf("%d\n",x+y-1);
			}
		}
		else
		{
			printf("No Number\n");
		}
	}
	// your code here

	return 0;
}
