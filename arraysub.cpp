#include <iostream>
#include<cstdio>
#include<deque>
using namespace std;

void printKmax(int a[],int n,int k)
{
	deque<int>Q(k);
	int i;
	for(i=0;i<k;i++)
	{
		while(!Q.empty() && a[i]>=a[Q.back()])
		{
			Q.pop_back();
		}
		Q.push_back(i);
	}
	for(;i<n;i++)
	{
		cout<<a[Q.front()]<<" ";
		while(!Q.empty() && Q.front()<=i-k)
		{
			Q.pop_front();
		}
		while(!Q.empty() && a[i]>=a[Q.back()])
		{
			Q.pop_back();
		}
		Q.push_back(i);
		
	}
	cout<<a[Q.front()]<<" ";
}

int main() {
	int n,k;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	printKmax(a,n,k);
	// your code here

	return 0;
}
