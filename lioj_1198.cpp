#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        scanf("%d",&n);
        int a[n],b[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);

        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
        sort(b,b+n);
        sort(a,a+n);
        int f1[n],e[n],f,p;
        memset(e,0,sizeof(e));
        memset(f1,0,sizeof(f1));

        for(i=0;i<n;i++)
        {
            f=0;
            p=0;
            for(j=0;j<n;j++)
            {
                if(a[i]>b[j] && e[j]!=2)
                {
                    if(f==1)
                    {
                        e[p]=0;
                    }
                       e[j]=2;
                       p=j;
                       f1[i]=2;
                        f=1;
                }
                else if(a[i]<=b[j])
                    break;
            }
        }
        int z=0;
        for(i=0;i<n;i++)
        {
            for(j=z;j<n;j++)
            {
                if(a[i]==b[j] && e[j]<2 && f1[i]!=2)
                {
                    e[j]=1;
                    z=j+1;
                    break;
                }
                else if(a[i]<b[j])
                    break;
            }
        }
      z=0;
      for(i=0;i<n;i++)
        z=z+e[i];
      printf("Case %d: %d\n",l++,z);
    }
}
