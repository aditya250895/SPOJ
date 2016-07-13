#include <iostream>
#include<cstdio>
#include<map>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,temp;
		map<int,int>M;
		scanf("%d",&n);
		int ans,flag=0;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&temp);
			M[temp]++;
		}
		for(map<int,int>::iterator it=M.begin();it!=M.end();it++)
		{
			if(it->second>n/2)
			{
				flag=1;
				ans=it->first;
				break;
			}
		}
		if(flag==1)
		{
			printf("YES %d\n",ans);
		}
		else
		{
			printf("NO\n");
		}
	}
	// your code here

	return 0;
}
