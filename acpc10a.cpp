#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main() {
	while(1)
	{
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		if(a==0 && b==0 && c==0)
		break;
		if(abs(b-a)==abs(c-b))
		{
			printf("AP %d\n",2*c-b);
		}
		else
		{
			printf("GP %d\n",c*c/b);
		}
	}
	// your code here

	return 0;
}
