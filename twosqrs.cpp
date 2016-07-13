#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long x;
		scanf("%lld",&x);
		long long i=sqrt(x),j=0;
		int flag=0;
		long long sum;
		while(i>0)
		{
		if(j*j>x)
		{
			printf("No\n");
			break;
		}
		else if(i*i+j*j == x)
		{
			printf("Yes\n");
			break;
		}
		else if(i*i+j*j<x)
		{
			j++;
		}
		else
		{
			i--;
		}
		}
		
		
	}
	// your code here

	return 0;
}
