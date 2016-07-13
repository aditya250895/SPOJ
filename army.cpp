#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main() {
	int t;
	scanf(\"%d\",&t);
	while(t--)
	{
		int ng,nm;
		printf(\"\\n\");
		scanf(\"%d%d\",&ng,&nm);
		int ngs[ng];
		int nms[nm];
		for(int i=0;i<ng;i++)
		{
			scanf(\"%d\",&ngs[i]);
		}
		for(int j=0;j<nm;j++)
		{
			scanf(\"%d\",&nms[j]);
		}
		int max1=0,max2=0;
		for(int i=0;i<ng;i++)
		{
			if(ngs[i]>=max1)
			{
				max1=ngs[i];
			}
		}
		for(int j=0;j<nm;j++)
		{
			if(nms[j]>=max2)
			{
				max2=nms[j];
			}
		}
		if(max1==0 && max2==0)
		{
			printf(\"uncertain\");
		}
		else if(max1>=max2)
		{
			printf(\"Godzilla\\n\");
		}
		else
		{
			printf(\"MechaGodzilla\\n\");
		}
		
	}
	
	// your code here

	return 0;
}
