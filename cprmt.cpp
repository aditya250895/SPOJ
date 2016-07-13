#include <iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
	char a[1001],b[1001];
	while(scanf("%s",a)==1)
	{
		scanf("%s",b);
		sort(a,a+strlen(a));
		sort(b,b+strlen(b));
		int i=0,j=0;
		int len=strlen(a);
		int len1=strlen(b);
		string str="";
		while(i<len && j<len1)
		{
			if(a[i]==b[j])
			{
				str+=a[i];
				i++;
				j++;
			}
			else if(a[i]>b[j])
			{
				j++;
			}
			else
			{
				i++;
			}
		}
		cout<<str<<endl;
	}// your code here

	return 0;
}
