#include <iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
struct trie
{
	bool is_end;
	struct trie* next[10];
	trie()
	{
		for(int i=0;i<10;i++)
		{
			next[i]=NULL;
		}
		is_end=false;
	}
};
int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		string str;
		trie *head,*tail;
		head=new trie;
		int flag=1;
		
			while(n--)
			{
				cin>>str;
				if(flag==1)
				{
					tail=head;
					int len=str.size();
					for(int i=0;i<len;i++)
					{
						if(tail->is_end)
						{
							flag=0;
							break;
						}
						int x=str[i]-'0';
						if(tail->next[x]==NULL)
						{
							tail->next[x]=new trie;
						}
						tail=tail->next[x];
					}
					tail->is_end=true;
					for(int i=0;i<10;i++)
					{
						if(tail->next[i])
						{
							flag=0;
							break;
						}
					}
				}
			}
			if(flag==0)
			{
				printf("NO\n");
			}
			else
			{
				printf("YES\n");
			}
		
	}// your code here

	return 0;
}
