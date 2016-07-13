#include <iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
		double a,b,c,d,s,area;
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		s=(a+b+c+d)/2;
		area=sqrt((s-a)*(s-b)*(s-c)*(s-d));
		printf("%.2lf\n",area);
	}
	// your code here

	return 0;
}
