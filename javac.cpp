#include <iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<cstdlib>
using namespace std;

int main() {
	string input;
	while(cin>>input)
	{
		int len=input.size();
		string output="";
		int flag=0,count1=0,count2=0;
		if(isupper(input[0]) || input[0]=='_' || input[len-1]=='_')
		{
			printf("Error!\n");
			flag=1;
			continue;
		}
		
		for(int i=0;i<len;i++)
		{
			
			if(islower(input[i]))
			{
				output+=input[i];
			}
			else if(input[i]=='_' && islower(input[i+1]))
			{
				output+=toupper(input[i+1]);
				count1++;
				i++;
			}
			else if(isupper(input[i]))
			{
				char x=input[i];
				output+='_';
				output+=tolower(x);
				count2++;
			}
			else
			{
				printf("Error!\n");
				
				flag=1;
				break;
			}
		}
		if(count1>0 && count2>0)
		{
			printf("Error!\n");
			flag=1;
		}
		if(flag==0)
		{
			cout<<output<<"\n";
	    }
	}
	// your code here

	return 0;
}
