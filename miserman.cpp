#include <iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int n,m,a[101][101],b[101][101];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int j=0;j<m;j++)
	{
		b[0][j]=a[0][j];
	}
	
			
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(j==0)
			{
				b[i][j]=a[i][j]+min(b[i-1][j],b[i-1][j+1]);
			}
			else if(j==m-1)
			{
				b[i][j]=a[i][j]+min(b[i-1][j],b[i-1][j-1]);
			}
			else
			{
				b[i][j]=a[i][j]+min(min(b[i-1][j],b[i-1][j-1]),b[i-1][j+1]);
			}
		}
	}
	int minn=1000000;
	for(int j=0;j<m;j++)
	{
		minn=min(minn,b[n-1][j]);
	}
	printf("%d\n",minn);
	// your code here

	return 0;
}
