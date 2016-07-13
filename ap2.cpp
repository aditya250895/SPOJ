#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long t3,l3,sum;
		scanf("%lld%lld%lld",&t3,&l3,&sum);
			
		long long n,a;
		long long d;
		n=(2*sum)/(l3+t3);
		
		d=((l3-t3)/(n-5));
		a=t3-(2*d);
		printf("%d\n",n);
		long long term;
		for(int i=0;i<n;i++)
		{
			term=a+(i*d);
			printf("%lld ",term);
		}
		
	}
	// your code here

	return 0;
}
