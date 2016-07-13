#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int gcd(int n,int m)
{
	if(m==0)
		return n;
	return gcd(m,n%m);
}

int main() {
	int t,n,m,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		int count=0;
		if(n<m)
		{
			temp=n;
			n=m;
			m=temp;
		}
		int ans=gcd(n,m);
		int sq=(int)sqrt(ans);
		for(int i=1;i<=sq;i++)
		{
			if(ans%i==0)
			{
				count+=2;
			}
			
		}
		if(sq*sq==ans)
		{
			count-=1;
		}
		printf("%d\n",count);
	}
	// your code here

	return 0;
}
