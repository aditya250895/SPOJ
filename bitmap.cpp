#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<cstring>
#include<queue>
#include<cmath>
#define ll long long
#define INF 1000000007
using namespace std;
char a[190][190];
int visited[200][200];
int dirx[]={0,0,1,-1};
int diry[]={1,-1,0,0};
int n,m;
void bfs(int i,int j)
{
	queue<pair<int,int> >q;
	q.push(make_pair(i,j));
	visited[i][j]=0;
	while(!q.empty())
	{
		int x=q.front().first;
		int y=q.front().second;
		q.pop();
		for(int i=0;i<4;i++)
		{
			if(x+dirx[i]<0 || x+dirx[i]>=n || y+diry[i]<0 || y+diry[i]>=m)
			continue;
			if(visited[x+dirx[i]][y+diry[i]]>visited[x][y]+1)
			{
			visited[x+dirx[i]][y+diry[i]]=visited[x][y]+1;
			q.push(make_pair(x+dirx[i],y+diry[i]));
		}
	}
}

}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d%d",&n,&m);
		for(int i=0;i<n;i++)
		{
			scanf("%s",a[i]);
		}
		memset(visited,INF,sizeof(visited));
		vector<pair<int,int> >v;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i][j]=='1')
				{
					v.push_back(make_pair(i,j));
				}
			}
		}
		for(int i=0;i<v.size();i++)
		{
			bfs(v[i].first,v[i].second);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				printf("%d ",visited[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
