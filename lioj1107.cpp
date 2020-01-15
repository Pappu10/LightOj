#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,n,i=1,x1,x2,y1,y2,t,x,y;
    scanf("%d",&n);
    while(n--)
    {
        //cin>>x1>>x2>>y1>>y2>>;
        scanf("%d%d%d%d%d",&x1,&y1,&x2,&y2,&a);
        printf("Case %d:\n",i++);
        if(x2>x1)
        {
            t=x1;
            x1=x2;
            x2=t;
        }
        if(y2>y1)
        {
            t=y1;
            y1=y2;
            y2=t;
        }
        while(a--)
        {
            scanf("%d%d",&x,&y);
            if((x2<=x && x1>=x)&&(y2<=y &&y1>=y))
                printf("Yes\n");
            else
                printf("No\n");
        }

    }
    return 0;
}
