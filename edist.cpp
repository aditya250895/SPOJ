#include <iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int t[2002][2002];
int main() {
	int tt;
	scanf("%d",&tt);
	while(tt--)
	{
		string a,b;
		cin>>a>>b;
		int len1=a.size();
		int len2=b.size();
		for(int i=0;i<=len1;i++)
		{
			t[i][0]=i;
		}
		for(int i=0;i<=len2;i++)
		{
			t[0][i]=i;
		}
		for(int i=1;i<=len1;i++)
		{
			for(int j=1;j<=len2;j++)
			{
				if(a[i-1]==b[j-1])
				{
					t[i][j]=t[i-1][j-1];
				}
				else
				{
					t[i][j]=min(min(t[i-1][j],t[i][j-1]),t[i-1][j-1])+1;
				}
			}
		}
		printf("%d\n",t[len1][len2]);
		
	}
	// your code here

	return 0;
}
