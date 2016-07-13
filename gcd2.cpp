#include <iostream>
#include<cstdio>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a;
		char s[10001];
		int num=0;
		scanf("%d",&a);
		scanf("%s",s);
		int len=strlen(s);
		if(a==0)
		{
			printf("%s\n",s);
			continue;
		}
		for(int i=0;i<len;i++)
		{
			num=(num*10+(s[i]-'0'))%a;
			
		}
		printf("%d\n",gcd(a,num));
	}
	// your code here

	return 0;
}
