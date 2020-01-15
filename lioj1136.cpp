#include<iostream>
#include<cstdio>
using namespace std;
int ar[11];
inline void fun()
{
    int a=0,i;
    ar[0]=0;
    for(i=1;i<10;i++)
    {
        a=a+i;
        ar[i]=a;
    }
}
int main()
{
    fun();
    long long int a,b,i,n,s,t,sum=0,y=1,p,x;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lld%lld",&a,&b);
        p=0;
          t=a/10;
          s=a%10;
          if(s!=0)
            sum=(t*46)+(10*((t*(t+1))/2))-((10-s)*t)+ar[s];
          else
            sum=(t*46)+(10*((t*(t+1))/2))-((10-s)*t);
          if(sum%3!=0)
          {
              p=((b-a)-((b-a)/3));
               printf("Case %lld: %lld\n",y++,p);
          }
         else if(sum%3==0)
         {
           ++a;
           if(a>b)
           {
               p=1;
                printf("Case %lld: %lld\n",y++,p);
           }
           else{
           t=a/10;
            s=a%10;
           if(s!=0)
            sum=(t*46)+(10*((t*(t+1))/2))-((10-s)*t)+ar[s];
          else
            sum=(t*46)+(10*((t*(t+1))/2))-((10-s)*t);
          if(sum%3==0)
          {
               x=2;
               b--;
               p=((b-a)-((b-a)/3));
               p=p+x;
                printf("Case %lld: %lld\n",y++,p);
          }
          else
          {
               x=1;
               p=((b-a)-((b-a)/3));
               p=p+x;
                printf("Case %lld: %lld\n",y++,p);
          }
           }
         }
    }
    return 0;
}
