#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    unsigned long long int n,i=1,a,b;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&a);
        if(a%2==1)
            printf("Case %lld: Impossible\n",i++);
        else
        {
            b=a;
            while(a>1)
            {
               a=a/2;
               if(a%2==1)
               {
                   printf("Case %lld: %lld %lld\n",i++,a,b/a);
                   break;
               }
            }
        }
    }
    return 0;
}

