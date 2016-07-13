#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	long long a,b;
	
	while(t--)
	{
		cin>>a;
		while(1)
		{
			char op=' ';
			while(op == ' ')
				cin>>op;
			
			if(op=='=')
			{
				printf("%lld\n",a);
				break;
			}
			cin>>b;
			switch(op)
			{
				case '+':
				a=a+b;
				break;
				case '-':
				a=a-b;
				break;
				case '*':
				a=a*b;
				break;
				case '/':
				a=a/b;
				break;
				default:
				break;
				
			}
		}
		
	}
	
	// your code here

	return 0;
}
