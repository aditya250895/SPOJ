#include <iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int a[n+2];
	vector<int> v1,v2;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				v1.push_back(a[i]*a[j]+a[k]);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				if(a[k]==0)
					continue;
				v2.push_back((a[i]+a[j])*a[k]);
			}
		}
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	int res=0,x;
	for(int i=0;i<v1.size();i++)
	{
		int lo=lower_bound(v2.begin(),v2.end(),v1[i])-v1.begin();
		int hi=upper_bound(v2.begin(),v2.end(),v1[i])-v1.begin();
		res+=hi-lo;
	}
	printf("%d\n",res);
	scanf("%d",&x);// your code here

	return 0;
}
