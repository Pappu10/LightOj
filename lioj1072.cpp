#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    int n,i;
    double r,pi,a,b,c;
    pi=acos(0.0);
    scanf("%d",&n);
    while(n--)
    {
        cin>>r>>b;
        a=(2*pi*r*r*2)/(3*b*2*pi);
       // cout<<sqrt(a)<<endl;
    }
}
