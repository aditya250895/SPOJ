#include <iostream>
#include<cstdio>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int pat[1000005];

void calculate(string str)
{
	pat[0]=0;
	int i=1,j=0,n=str.size();
	while(i<n)
	{
		if(str[i]==str[j])
		{
			j++;
			pat[i]=j;
			i++;
		}
		else
		{
			if(j!=0)
			{
				j=pat[j-1];
			}
			else
			{
				pat[i]=0;
				i++;
			}
		}
	}
	
	return;
}

int main() {
	int n;
	string str,str1;
	while(scanf("%d\n",&n)!=EOF)
	{
		getline(cin,str);
		getline(cin,str1);
		calculate(str);
		int len=str1.size();
		int i=0,j=0;
		while(i<len)
		{
			if(str[j]==str1[i])
			{
				i++;
				j++;
			}
			if(j==n)
			{
				printf("%d\n",i-j);
				j=pat[j-1];
			}
			else
			{
				if(str[j]!=str1[i])
				{
					if(j!=0)
					{
						j=pat[j-1];
					}
					else
					{
						i++;
					}
				}
			}
		}
		printf("\n");
	}
	
	// your code here

	return 0;
}
