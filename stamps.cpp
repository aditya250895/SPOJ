#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	for(int j=0;j<t;j++)
	{
		int total,n;
		scanf("%d%d",&total,&n);
		int a[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		int sum=0,count=0,flag=0;
		for(int i=n-1;i>=0;i--)
		{
			sum+=a[i];
			count++;
		
			if(sum>=total)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"Scenario #"<<j+1;
			cout<<":\n"<<count;
		}
		else
		{
			cout<<"Scenario #"<<j+1;
			cout<<":\n"<<"impossible";
		}
		
		cout<<"\n";
		
	}
	// your code here

	return 0;
}
