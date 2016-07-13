								#include <bits/stdc++.h>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<sstream>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<sstream>


using namespace std;

int main()
{
    double u,v,w,U,V,W,x,y,z,X,Y,Z,a,b,c,d,vol,t;
    cout<<endl;
    cin>>t;
    while(t--)
    {
        cin>>v>>w>>u>>U>>W>>V;
       
       X=(w-U+v)*(U+v+w);
       x=(U-v+w)*(v-w+U);
       Y=(u-V+w)*(V+w+u);
       y=(V-w+u)*(w-u+V);
       Z=(v-W+u)*(W+u+v);
       z=(W-u+v)*(u-v+W);
       a=sqrt(x*Y*Z);
       b=sqrt(y*Z*X);
       c=sqrt(z*X*Y);
       d=sqrt(x*y*z);
       vol=sqrt((-a+b+c+d)*(a-b+c+d)*(a+b-c+d)*(a+b+c-d));
        vol=vol/(192*u*v*w);
        printf("%0.4lf\n",vol);
    }
    return 0;
}
							

