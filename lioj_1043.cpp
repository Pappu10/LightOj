#include<iostream>
#include<math.h>
#include<cstdio>
using namespace std;


int main()
{
    int n,l=1;
    scanf("%d",&n);
    while(n--)
    {
    double a,b,c,d,r,s,a1,b1,c1,a2,b2,c2,d1,d2;
    a1=0,b1=0,c1=0;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&r);

    d=sqrt(((a+b+c)/2)*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c));

    s=0;
    while(fabs(r-s)>.00000000001)
    {

        if(s>r)
        {
            a=(a+a1)/2;
            b=(b+b1)/2;
            c=(c+c1)/2;
        }
        else
        {
            a1=(a+a1)/2;
            b1=(b+b1)/2;
            c1=(c+c1)/2;
        }
        a2=(a1+a)/2;
        b2=(b1+b)/2;
        c2=(c1+c)/2;
        d1=sqrt(((a2+b2+c2)/2)*((a2+b2+c2)/2-a2)*((a2+b2+c2)/2-b2)*((a2+b2+c2)/2-c2));
        d2=d-d1;
        s=d1/d2;
    }
   printf("Case %d: %.7f\n",l++,a2);
}
return 0;
}
