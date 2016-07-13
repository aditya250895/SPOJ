#include <iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	while(1)
	{
		char num[5010];
		scanf("%s",num);
		
		if(num[0]=='0')
		break;
		long long len=strlen(num);
		long long arr[5010];
		memset(arr,0,5010);
		arr[0]=1;
		long long x,i;
		for(i=1;i<len;i++)
		{
			x=(num[i-1]-'0')*10+(num[i]-'0');
			if(num[i]-'0')
			{
				arr[i]=arr[i-1];
			}
			if(x>=10 && x<=26)
			{
				arr[i]+=arr[(i-2)<0?0:i-2];
			}
		}
		printf("%lld\n",arr[len-1]);
		
		
		
		
	}
	// your code here

	return 0;
}
