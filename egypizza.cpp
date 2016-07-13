#include<iostream>
#include<cstdio>
#include<algorithm>
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	string s;
	int c1=0,c2=0,c3=0;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(s[0]=='3')
		c3++;
		else if(s[2]=='2')
		c2++;
		else
		c1++;
	}
	int ans=1;
	ans+=c3;
	if(c1>=c3)
	{
		c1-=c3;
	}
	else
	c1=0;
	ans+=c2/2;
	c2-=2*(c2/2);
	if(c2)
	{
		ans++;
		if(c1>0)
		c1-=2;
	}
	if(c1>0)
	ans+=c1/4;
	if(c1>0)
	ans++;
	printf("%d\n",ans);
	
	return 0;
}
