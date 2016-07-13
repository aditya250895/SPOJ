#include <iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
bool p[10005];
int visit[10005],b[5];
struct Node
{
	int cur;
	int len;
};
bool prime(int n)
{
	
	if(n%2==0)
	{
		return false;
	}
	for(int i=3;i<=n/2;i+=2)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	
	return true;
	
}

void prime_table()
{
	memset(p,0,sizeof(0));
	for(int i=1000;i<=10000;i++)
	{
		p[i]=prime(i);
	}
}
void gen_num(int c)
{
	b[1]=c%10;
	b[2]=(c%100)/10;
	b[3]=(c%1000)/100;
	b[4]=(c%10000)/1000;
}

int bfs(int n,int m)
{
	if(n==m)
	return 0;
	memset(visit,0,sizeof(visit));
	Node node;
	node.cur=n;
	node.len=0;
	visit[n]==1;
	queue<Node>q;
	q.push(node);
	while(1)
	{
		Node node_t;
		node_t=q.front();
		q.pop();
		
		gen_num(node_t.cur);
		for(int i=1;i<=4;i++)
		{
			int c=node_t.cur-b[i]*pow(10,i-1);
			for(int j=0;j<=9;j++)
			{
				int c_new=c+j*pow(10,i-1);
				if(c_new==m)
				{
					return node_t.len+1;
				}
				if(c_new<1000 || p[c_new]==0 || visit[c_new]==1)
					continue;
				Node ne;
				ne.cur=c_new;
				ne.len=node_t.len+1;
				visit[c_new]=1;
				q.push(ne);
			}
			
		}
	}
}

int main() {
	int t;
	scanf("%d",&t);
	prime_table();
	while(t--)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		printf("%d\n",bfs(n,m));
	}
	// your code here

	return 0;
}
