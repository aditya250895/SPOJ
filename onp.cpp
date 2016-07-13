#include <iostream>
#include<cstdio>
#include<algorithm>
#include<stack>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	char a[500];
	stack<char>s;
	while(t--)
	{
		scanf("%s",a);
		for(int i=0;a[i]!='\0';i++)
		{
			if(isalpha(a[i]))
			{
				printf("%c",a[i]);
			}
			else if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/'||a[i]=='^')
			{
				s.push(a[i]);
			}
			else if(a[i]==')')
			{
				printf("%c",s.top());
				s.pop();
			}
		}
		printf("\n");
	}
	// your code here

	return 0;
}
