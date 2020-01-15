#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,t,p=1;
    scanf("%d",&n);
    while(n--)
    {
          scanf("%d",&t);
          int a[t],i,j,temp,b,c,f,e=0;
          for(i=0;i<t;i++)
            cin>>a[i];
          for(i=0;i<t-1;i++)
          {
              b=a[i];
               f=0;
              for(j=i+1;j<t;j++)
              {
                  if(b>a[j])
                  {
                      f=1;
                      b=a[j];
                      c=j;
                  }
              }
              if(f==1)
              {
                  temp=a[i];
                  a[i]=b;
                  a[c]=temp;
                  e++;
              }
          }
         printf("Case %d: %d\n",p++,e);
    }
    return 0;
}
