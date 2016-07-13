#include <iostream>
#include<cstdio>
#include<map>
#include<string>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		string s;
		scanf("%d",&n);
		cin>>s;
		map<string,int>m;
		for(int i=0;i<=37;i++)
		{
			m[s.substr(i,3)]++;
		}
		printf("%d %d %d %d %d %d %d %d %d\n",n,m["TTT"],m["TTH"],m["THT"],m["THH"],m["HTT"],m["HTH"],m["HHT"],m["HHH"]);
	}
	// your code here

	return 0;
}
