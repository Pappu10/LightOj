#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k=1;
    scanf("%d",&n);
    while(n--)
    {
         int t,s;
         printf("Case %d: ",k++);
         scanf("%d%d",&t,&s);
         long long int a,b[t],i,j,p,l,x;
         for(i=0;i<t;i++)
          {
             scanf("%lld%lld",&a,&b[i]);
          }
          sort(b,b+t);
          p=b[0];
          x=1;
          for(i=1;i<t;i++)
          {
              l=b[i]-p;
              if(l>s)
              {
                  x++;
                  p=b[i];
              }
          }
          printf("%lld\n",x);
    }
    return 0;
}
