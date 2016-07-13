#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int a[11],sum=0,x,y;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++)
	{
		sum+=a[i];
		if(sum==100)
		{
			break;
		}
		if(sum>100)
		{
			x=sum-100;
			y=100-(sum-a[i]);
			if(x==y || x<y)
			{
				break;
			}
			else
			{
				sum-=a[i];
				break;
			}
			
		}
	}
	
	
	printf("%d\n",sum);
	// your code here

	return 0;
}
