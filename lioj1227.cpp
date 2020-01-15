#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b,c,n,i,j=1;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&a,&b,&c);
        int e,s=0,t=0;
        for(i=0;i<a;i++)
        {
            scanf("%d",&e);
            s=s+e;
            if(i<b && s<=c)
            {
                t++;
            }
        }
        printf("Case %d: %d\n",j++,t);
    }
    return 0;
}
