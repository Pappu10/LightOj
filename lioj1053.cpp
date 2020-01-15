#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    unsigned int a,b,c,n,i=1;
    scanf("%d",&n);
    while(n--)
    {
         scanf("%d%d%d",&a,&b,&c);
         if(a>=b&&a>=c)
         {
             if((a*a)==((b*b)+(c*c)))
                printf("Case %d: yes\n",i++);
               else
                    printf("Case %d: no\n",i++);
         }
        else if(b>=c&&b>=a)
         {
             if((b*b)==((a*a)+(c*c)))
                printf("Case %d: yes\n",i++);
                else
                    printf("Case %d: no\n",i++);
         }
        else if(c>=b&&c>a)
         {
            if((c*c)==((b*b)+(a*a)))
                printf("Case %d: yes\n",i++);
                else
                    printf("Case %d: no\n",i++);
         }
    }
    return 0;
}
