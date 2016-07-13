#include <iostream>
#include<cstdio>
#include<stack>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
	char str[2002];
	for(int j=1;;j++)
	{
		scanf("%s",str);
		if(str[0]=='-')
		{
			break;
		}
		stack<char>s;
		int len=strlen(str),count=0,t=0;
		for(int i=0;i<len;i++)
		{
			if(str[i]=='{')
			{
				
				s.push(str[i]);
				
			}
			else if(!s.empty() && str[i]=='}')
			{
				s.pop();
				
			}
			else
			{
				s.push(str[i]);
				t++;
				
				
			}
	}
		while(!s.empty())
		{
			s.pop();
			count++;
		}
		printf("%d. %d\n",j,t+count/2);
}
	// your code here

	return 0;
}
