#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main() {
	int xx=0;
	while(1)
	{
		xx++;
		int n;
		
		scanf("%d",&n);
		if(n==0)
		break;
		int a[n+2][4];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<3;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		a[1][0]+=a[0][1];
		a[0][2]+=a[0][1];
		a[1][1]+=min(min(a[1][0],a[0][1]),a[0][2]);
		a[1][2]+=min(min(a[1][1],a[0][1]),a[0][2]);
		for(int i=2;i<n;i++)
		{
			a[i][0]+=min(a[i-1][0],a[i-1][1]);
			a[i][1]+=min(min(min(a[i-1][1],a[i][0]),a[i-1][2]),a[i-1][0]);
			a[i][2]+=min(min(a[i-1][2],a[i-1][1]),a[i][1]);
		}
		printf("%d. %d\n",xx,a[n-1][1]);
	}
	// your code here

	return 0;
}
