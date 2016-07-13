#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		break;
		int count=0;
		while(n>0)
		{
			n/=2;
			if(n>0)
			{
			
			count++;
		}
		}
		printf("%d\n",count);
	}
	// your code here

	return 0;
}
