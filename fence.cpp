#include <iostream>
#include<cstdio>
using namespace std;

int main() {
	
	while(1)
	{
		int n;
		scanf(\"%d\",&n);
		if(n==0)
		{
			break;
		}
		float pi=3.14159;
		float area=(float)((n*n)/(2*pi));
		printf(\"%.2f\\n\",area);
		
	}
	
	
	// your code here

	return 0;
}
