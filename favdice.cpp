#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		double n;
		scanf("%lf",&n);
		double ans=n;
		double sum=0;
		for(double i=1;i<=n;i++)
		{
			sum+=(double)(1/i);
		}
		ans=ans*sum;
		printf("%0.2lf\n",ans);
	}
	// your code here

	return 0;
}
