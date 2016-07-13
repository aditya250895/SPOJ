#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[205],b[50][50];
int main() {
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==0)
		break;
		scanf("%s",a);
		int len=strlen(a);
		int rows=len/n,k=0;
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i%2==0)
				{
					b[i][j]=a[k];
				}
				else
				{
					b[i][n-j-1]=a[k];
				}
				k++;
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<rows;j++)
			{
				printf("%c",b[j][i]);
			}
		}
		printf("\n");
	}
	// your code here

	return 0;
}
