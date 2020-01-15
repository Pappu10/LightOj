#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c,d,n,i=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        if(b>a)
            c=b-a;
        else
            c=a-b;
        d=(c*4)+19+(a*4);
        printf("Case %d: %d\n",++i,d);

    }
    return 0;
}
