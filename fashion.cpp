#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	int a[1010],b[1010];
	while(t--)
	{
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=0;i<n;i++)
		{
			scanf("%d",&b[i]);
		}
		sort(a,a+n);
		sort(b,b+n);
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum+=a[i]*b[i];
		}
		printf("%d\n",sum);
	}
	// your code here

	return 0;
}
