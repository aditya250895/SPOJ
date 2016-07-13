#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	long long n;
	scanf("%lld",&n);
	int x=(int)n%10;
	int a=3,b=4;
	if(x==0)
	{
		printf("2\n");
	}
	else
	{
		printf("1\n");
		printf("%d",x);
	}
	
	
	
	// your code here

	return 0;
}
