#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int t;
	scanf(\"%d\",&t);
	while(t--)
	{
		long long n,count;
		
		scanf(\"%lld\",&n);
		if(n%2==0)
		{
			count=((n+2)*(n+1)*n)/6;
			count+=(n*(n+2)*(2*n-1))/24;
		}
		else
		{
			count=((n+2)*(n+1)*n)/6;
			count+=((n*n-1)*(2*n+3))/24;
		}
		printf(\"%lld\\n\",count);
	}
	// your code here

	return 0;
}
