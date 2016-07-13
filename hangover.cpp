#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	while(1)
	{
		float n;
		scanf("%f",&n);
		if(n==0.00)
		break;
		
		int x=2,count=0;
		
		while(n>=0.00)
		{
			n=n-(float)1/x;
			count++;
			x++;
		}
		
		printf("%d card(s)\n",count);
		
		
	}
	// your code here

	return 0;
}
