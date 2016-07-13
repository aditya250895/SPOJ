#include<cstdio>
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<algorithm>
#include<vector>
#include<queue>
#define ll long long
#define MOD 1000007
using namespace std;
vector<int>g[10005];
int n,ans,des;
int visited[10005];

void bfs(int start)
{
	queue<int>q;
	q.push(start);
	visited[start]=1;
	while(!q.empty())
	{
		int x=q.front();
		q.pop();
		for(int i=0;i<g[x].size();i++)
		{
			if(visited[g[x][i]]==0)
			{
				visited[g[x][i]]=visited[x]+1;
				q.push(g[x][i]);
			}
		}
	}
	ans=0;
	for(int i=1;i<=n;i++)
	{
		if(visited[i]>ans)
		{
			ans=visited[i];
			des=i;
		}
	}
}

int main()
{
	scanf("%d",&n);
	int x,y;
	for(int i=0;i<n-1;i++)
	{
		scanf("%d%d",&x,&y);
		g[x].push_back(y);
		g[y].push_back(x);
	}
	ans=0;
	memset(visited,0,sizeof(visited));
	bfs(1);
	//printf("%d\n",ans);
	ans=0;
	memset(visited,0,sizeof(visited));
	bfs(des);
	printf("%d\n",ans-1);
	return 0;
}
