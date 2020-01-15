#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
    int a,b,d,n,i,j,t,g,h=1;
     char s;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        int e[a+1];
        for(i=1;i<=a;i++)
        {
            scanf("%d",&e[i]);
        }
        while(b--)
        {
          cin>>s;
          //scanf("%c",&s);
            if(s=='S')
            {
                scanf("%d",&d);
                for(i=1;i<=a;i++)
                {
                    e[i]+=d;
                }
            }
            else if(s=='M')
            {
                scanf("%d",&d);
                for(i=1;i<=a;i++)
                {
                    e[i]*=d;
                }
            }
            else if(s=='D')
            {
                scanf("%d",&d);
                for(i=1;i<=a;i++)
                {
                    e[i]/=d;
                }
            }
            else if(s=='R')
            {
                for(i=1;i<=a/2;i++)
                {
                    t=e[i];
                    e[i]=e[a-i+1];
                    e[a-i+1]=t;
                }
            }
            else if(s=='P')
            {
                scanf("%d%d",&d,&g);
                t=e[d+1];
                e[d+1]=e[g+1];
                e[g+1]=t;
            }
        }
        printf("Case %d:\n",h++);
        for(i=1;i<a;i++)
        {
            printf("%d ",e[i]);
        }
        printf("%d\n",e[i]);
    }
    return 0;
}
