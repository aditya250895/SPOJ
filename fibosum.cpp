#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
long long MX=1000000007;

void multiply(long long F[2][2],long long M[2][2])
{
	long long x =  (F[0][0]*M[0][0] + F[0][1]*M[1][0])%MX;
	long long y =  (F[0][0]*M[0][1] + F[0][1]*M[1][1])%MX;
	long long z =  (F[1][0]*M[0][0] + F[1][1]*M[1][0])%MX;
	long long w =  (F[1][0]*M[0][1] + F[1][1]*M[1][1])%MX;
 
	F[0][0] = x;
	F[0][1] = y;
	F[1][0] = z;
	F[1][1] = w;
}
void power(long long F[2][2],long long n)
{
	if(n==0||n==1)
	return;
	long long M[2][2]={{1,1},{1,0}};
	power(F,n/2);
	multiply(F,F);
	if(n%2)
	{
		multiply(F,M);
	}
}
long long fib(long long n)
{
	long long F[2][2]={{1,1},{1,0}};
	if(n==0)
	return 0;
	power(F,n-1);
	return F[0][0];
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,m;
		scanf("%lld%lld",&n,&m);
		long long temp;
		if(m<n)
		{
			temp=m;
			m=n;
			n=temp;
		}
		long long ans=(fib(m+2)-fib(n+1)+MX)%MX;
		printf("%lld\n",ans);
		
	}
	// your code here

	return 0;
}
