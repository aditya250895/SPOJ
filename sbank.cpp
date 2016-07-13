#include <iostream>
#include<cstdio>
#include<map>

using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		char x[40];
		map<string, int>M;
		scanf("%d\n",&n);
		for(int i=0;i<n;i++)
		{
			gets(x);
			M[(string)x]++;
			
		}
		map<string, int>::iterator i;
		for(i=M.begin();i!=M.end();i++)
		{
			cout<<i->first<<" "<<i->second<<"\n";
		}
	}
	// your code here

	return 0;
}
