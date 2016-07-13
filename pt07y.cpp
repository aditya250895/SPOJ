#include <stdio.h>
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n,nodes;
int visited[10005]={0};
vector<int>g[10005];
bool bfs(int start)
{
	queue<int>q;
	q.push(start);
	visited[start]=1;
	int count=0;
	while(!q.empty())
	{
		int x=q.front();
		q.pop();
		for(int i=0;i<g[x].size();i++)
		{
			if(visited[g[x][i]])
			continue;
			count++;
			q.push(g[x][i]);
			visited[g[x][i]]=1;
		}
		
	}
	if(count==nodes-1)
	return 1;
	return 0;
}


int main()
{
    int edges,x,y;
    scanf("%d%d",&nodes,&edges);
    for(int i=0;i<edges;i++)
    {
    	scanf("%d%d",&x,&y);
    	g[x].push_back(y);
    	g[y].push_back(x);
	}
	if(edges==nodes-1 && bfs(1))
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
    int xx;
    scanf("%d",&xx);
    return 0;
}

