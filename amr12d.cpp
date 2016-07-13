#include <iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	char str[100],str1[100];
	while(t--)
	{
		cin>>str;
		int len=strlen(str);
		for(int i=0;i<len;i++)
		{
			str1[i]=str[len-i-1];
		}
		int flag=1;
		for(int i=0;i<len;i++)
		{
			if(str[i]!=str1[i])
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
	// your code here

	return 0;
}
