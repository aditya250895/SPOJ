#include <iostream>
#include<cstdio>

using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,sum=0,n;
		scanf("%d",&n);
		for(i=1;;i++)
		{
			sum+=i;
			if(sum>=n)
			{
				break;
			}
		}
		int x=n-(sum-i);
		int y=i+1-x;
		if(i%2)
		{
			cout<<"TERM "<<n<<" IS "<<y<<"/"<<x;
		}
		else
		{
			cout<<"TERM "<<n<<" IS "<<x<<"/"<<y;
		}
		cout<<"\n";
	}
	
	// your code here

	return 0;
}
