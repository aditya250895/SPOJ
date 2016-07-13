#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	int n,count=0;
	int sq;
	scanf("%d",&n);// your code here
	for(int i=1;i<=n;i++)
	{
		sq=sqrt(i);
		for(int j=1;j<=sq;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
}
