#include <iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
#define INT -1000000
struct node
{
	int result,pre,suf,sum;
	void merge(node a,node b)
	{
		sum=a.sum+b.sum;
		suf=max(b.suf,b.sum+a.suf);
		pre=max(a.pre,a.sum+b.pre);
		result=max(max(a.result,b.result),a.suf+b.pre);
	}
	node()
	{
		result=pre=suf=sum=INT;
	}
	node(int temp)
	{
		result=pre=suf=sum=temp;
	}
}tree[200080];

void update(int pos)
{
	pos>>=1;
	while(pos!=0)
	{
		tree[pos].merge(tree[pos*2],tree[pos*2 + 1]);
		pos>>=1;
	}
}

node range_query(int root,int left_most,int right_most,int l,int r)
{
	if(l<=left_most && r>=right_most)
	{
		return tree[root];
	}
	int l_child=(root<<1),r_child=l_child+1,mid=(left_most+right_most)>>1;
	node l_node=node();
	node r_node=node();
	if(l<=mid)
	{
		l_node=range_query(l_child,left_most,mid,l,r);
	}
	if(r>mid)
	{
		r_node=range_query(r_child,mid+1,right_most,l,r);
	}
	tree[root].merge(tree[l_child], tree[r_child]);
	node temp=node();
	temp.merge(l_node,r_node);
	return temp;
}

int main() {
	int n,k,pos,temp,c,l,r;
	scanf("%d",&n);
	k=ceil(log(n)/log(2));
	pos=(1<<k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&temp);
		tree[pos+i]=node(temp);
		update(pos+i);
	}
	int m;
	scanf("%d",&m);
	while(m--)
	{
		scanf("%d%d%d",&c,&l,&r);
		if(c==1)
		{
			printf("%d\n",range_query(1,1,pos,l,r).result);
		}
		else if(c==0)
		{
			tree[pos+l-1]=node(r);
			update(pos+l-1);
		}
	}
	
	// your code goes here
	return 0;
}