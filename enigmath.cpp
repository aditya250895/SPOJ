#include <iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	return a;
	return gcd(b,a%b);
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b,temp,flag=0;
		scanf("%d%d",&a,&b);
		if(a<b)
		{
			temp=a;
			a=b;
			b=temp;
			flag=1;
		}
		int x=gcd(a,b);
		if(flag==1)
		{
			printf("%d %d\n",a/x,b/x);
		}
		else
		{
			printf("%d %d\n",b/x,a/x);
		}
	}
	// your code here

	return 0;
}
