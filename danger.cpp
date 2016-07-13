#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	
	while(1)
	{
		char a[5];
		
		cin>>a;
		if(a[0]=='0' && a[1]=='0')
		break;
		int x,y,z,number;
		x=a[0]-'0';
		y=a[1]-'0';
		z=a[3]-'0';
		number=x*10+y;
		for(int i=1;i<=z;i++)
		{
			number*=10;
		}
		int aa=log2(number);
		int ab=pow(2,aa);
		int ans=(number-ab)*2+1;
		printf("%d\n",ans);
	}	
	// your code here

	return 0;
}
