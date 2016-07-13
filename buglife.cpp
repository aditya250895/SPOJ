#include <iostream>
#include<cstdio>
#include<queue>
#include<algorithm>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++)
	{
		int n,m,u,v;
		scanf("%d%d",&n,&m);
		vector<int>graph[n+1];
		int list[n+1],mark[n+1];
		for(int i=0;i<m;i++)
		{
			scanf("%d%d",&u,&v);
			graph[u].push_back(v);
			graph[v].push_back(u);
		}
		for(int i=0;i<=n;i++)
		{
			list[i]=2;
			mark[i]=0;
		}
		int flag=0;
		for(int i=1;i<=n;i++)
		{
			if(mark[i]==0)
			{
				queue<int>q;
				q.push(i);
				list[i]=1;
				while(!q.empty())
				{
					int temp=q.front();
					for(int j=0;j<graph[temp].size();j++)
					{
						if(list[graph[temp][j]]==2)
						{
							list[graph[temp][j]]=!list[temp];	
						}
						else if(list[graph[temp][j]]==list[temp])
						{
							flag=1;
							break;
						}
						if(mark[graph[temp][j]]==0)
						{
							q.push(graph[temp][j]);
							
						}
					}
					q.pop();
					mark[temp]=1;
					if(flag==1)
					{
						break;
					}
				}
			}
			if(flag==1)
			{
				break;
			}
		}
		printf("Scenario #%d:\n",k);
		if(flag==1)
		{
			
			printf("Suspicious bugs found!\n");
		}
		else
		{
			printf("No suspicious bugs found!\n");
		}
	}
	// your code here

	return 0;
}
