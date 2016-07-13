#include <iostream>
#include<cstdio>
#include<set>
using namespace std;

int main() {
	int n;
	int m,id;
	set<int>f;
	set<int>fof;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&id,&m);
		f.insert(id);
		if(fof.end()!=fof.find(id))
		{
			fof.erase(id);
		}
		for(int j=0;j<m;j++)
		{
			scanf("%d",&id);
			if(f.end()==f.find(id))
			{
				fof.insert(id);
			}
		}
	}
	printf("%d\n",fof.size());
	
	// your code here

	return 0;
}
