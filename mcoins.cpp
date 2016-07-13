#include <iostream>
#include<cstdio>
using namespace std;
int MX=1000005;
int main() {
	int k,l,n;
	scanf("%d%d%d",&k,&l,&n);
	bool a[MX];
	a[0]=false;
	
	for(int i=1;i<MX;i++)
	{
		a[i]=false;
		if(i-1>=0 && a[i-1]==false)
		{
			a[i]=true;
		}
		else if(i-k>=0 && a[i-k]==false)
		{
			a[i]=true;
		}
		else if(i-l>=0 && a[i-l]==false)
		{
			a[i]=true;
		}
	}
	int b[55];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[b[i]]==true)
		{
			printf("A");
		}
		else
		{
			printf("B");
		}
	}
	// your code here

	return 0;
}
