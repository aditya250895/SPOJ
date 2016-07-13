#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int result=n;
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				result-=result/i;
			}
			while(n%i==0)
			{
				n/=i;
			}
		}
		if(n>1)
		{
			result-=result/n;
		}
		printf("%d\n",result);
	}
	// your code here

	return 0;
}
