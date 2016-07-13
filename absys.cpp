#include <iostream>
#include<cstdlib>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cctype>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		string a,b,c;
		char op,equal;
		int flag1=0,flag2=0,flag3=0,x=0,y=0,z=0;
		cin>>a;
		cin>>op;
		cin>>b;
		cin>>equal;
		cin>>c;
		int len1,len2,len3;
		len1=a.size();
		len2=b.size();
		len3=c.size();
		for(int i=0;i<len1;i++)
		{
			if(isalpha(a[i]))
			{
				flag1=1;
				break;
			}
		}
		for(int i=0;i<len2;i++)
		{
			if(isalpha(b[i]))
			{
				flag2=1;
				break;
			}
		}
		for(int i=0;i<len3;i++)
		{
			if(isalpha(c[i]))
			{
				flag3=1;
				break;
			}
		}
		if(flag1==1)
		{
			for(int i=0;i<len3;i++)
			{
				x=x*10+(c[i]-'0');
		    }
			for(int j=0;j<len2;j++)
			{
				y=y*10+(b[j]-'0');
			}
			cout<<x-y<<" + "<<b<<" = "<<c;
			
		}
		else if(flag2==1)
		{
			for(int i=0;i<len3;i++)
			{
				x=x*10+(c[i]-'0');
		    }
			for(int j=0;j<len1;j++)
			{
				y=y*10+(a[j]-'0');
			}
			cout<<a<<" + "<<x-y<<" = "<<c;
			
		}
		else if(flag3==1)
		{
			for(int i=0;i<len1;i++)
			{
				x=x*10+(a[i]-'0');
		    }
			for(int j=0;j<len2;j++)
			{
				y=y*10+(b[j]-'0');
			}
			cout<<a<<" + "<<b<<" = "<<x+y;
			
		}
		cout<<"\n";
		
	}
	// your code here

	return 0;
}

