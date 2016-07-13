#include <iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main() {
	while(1)
	{
		int n;
		scanf("%d",&n);
		if(n==0)
		{
			break;
		}
		queue<int>q;
		stack<int>s;
		int v;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&v);
			q.push(v);
		}
		int c=1;
		while(!s.empty() || !q.empty())
		{
			if(!q.empty() && q.front()==c)
			{
				q.pop();
				c++;
			}
			else
			{
				if(!s.empty() && s.top()==c)
				{
					s.pop();
					c++;
					
				}
				else
				{
					if(!q.empty())
					{
						int x=q.front();
						s.push(x);
						q.pop();
					}
					else
					{
						break;
					}
				}
			}
		}
		
		
		if(c==n+1)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
		
	}
	// your code here

	return 0;
}
