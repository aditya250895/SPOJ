#include <iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
long long B1[100005],B2[100005];
int N;

long long query(long long ft[],int j)
{
	long long sum=0;
	for(;j>0;j-=j&(-j))
	{
		sum+=ft[j];
	}
	return sum;
}

long long query(int j)
{
	return query(B1,j)*j-query(B2,j);
}

long long range_query(int i,int j)
{
	return query(j)-query(i-1);	
}

void update(long long ft[],int i,long long v)
{
	for(;i<=N;i+=i&(-i))
	{
		ft[i]+=v;
	}
}
void range_update(int i,int j,long long v)
{
	update(B1,i,v);
	update(B1,j+1,-v);
	update(B2,i,v*(i-1));
	update(B2,j+1,-v*j);
}

int main() {
	int t;
	int c,cmd,p,q;
	long long v;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d %d",&N,&c);
		for(int i=0;i<N+1;i++)
		{
			B1[i]=0;
			B2[i]=0;
		}
		while(c--)
		{
			scanf("%d%d%d",&cmd,&p,&q);
			if(cmd==0)
			{
				scanf("%lld",&v);
				range_update(p,q,v);
			}
			else
			{
				printf("%lld\n",range_query(p,q));
			}
		}
	}
	// your code here

	return 0;
}
