#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#define ll long long
using namespace std;
ll a[50005];
struct node
{
	ll max,sum,maxl,maxr;
}tree[4*50005];

void initialise(ll nod,ll lo,ll hi)
{
	if(lo==hi)
	{
		tree[nod].max=tree[nod].maxl=tree[nod].maxr=tree[nod].sum=a[lo];
	}
	else
	{
		ll mid=(lo+hi)/2;
		initialise(nod*2,lo,mid);
		initialise(nod*2+1,mid+1,hi);
		tree[nod].sum=tree[nod*2].sum+tree[nod*2+1].sum;
		tree[nod].max=max(max(tree[nod*2].max,tree[nod*2+1].max),tree[nod*2].maxr+tree[nod*2+1].maxl);
		tree[nod].maxl=max(tree[nod*2].maxl,tree[nod*2].sum+tree[nod*2+1].maxl);
		tree[nod].maxr=max(tree[nod*2+1].maxr,tree[nod*2+1].sum+tree[nod*2].maxr);
	}	
}

node query(ll nod,ll lo,ll hi,ll i,ll j)
{
	if(i<=lo && j>=hi)
	return tree[nod];
	ll mid=(lo+hi)/2;
	if(j<=mid)
	{
		return query(nod*2,lo,mid,i,j);
	}
	else if(i>mid)
	{
		return query(nod*2+1,mid+1,hi,i,j);
	}
	node p1=query(nod*2,lo,mid,i,j);
	node p2=query(nod*2+1,mid+1,hi,i,j);
	node result;
	result.sum=p1.sum+p2.sum;
	result.max=max(max(p1.max,p2.max),p1.maxr+p2.maxl);
	result.maxl=max(p1.maxl,p1.sum+p2.maxl);
	result.maxr=max(p2.maxr,p2.sum+p1.maxr);
	return result;
}

int main()
{
	ll n;
	scanf("%lld",&n);
	for(ll i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	initialise(1,0,n-1);
	int m;
	scanf("%d",&m);
	ll x,y;
	while(m--)
	{
		scanf("%lld%lld",&x,&y);
		node ans=query(1,0,n-1,x-1,y-1);
		printf("%lld\n",ans.max);
	}
	return 0;
}
