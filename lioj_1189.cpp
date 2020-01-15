#include<iostream>
#include<cstdio>
using namespace std;
long long int f[21];
int main()
{
    long long int i,j,a,n,s=0,p,t;
    f[0]=1;
    long long int b[21];
    for(i=1;i<=20;i++)
    {
        f[i]=i*f[i-1];
    }
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&a);
        t=0;
        s++;
        for(i=20;i>=0&&a>0;i--)
        {
            if(a>=f[i])
            {
                a=a-f[i];
                b[t++]=i;
            }
        }
        if(a==0)
        {
               printf("Case %lld: ",s);
               for(j=t-1;j>0;j--)
                printf("%lld!+",b[j]);
               printf("%lld!\n",b[j]);
        }
        else
            printf("Case %lld: impossible\n",s);
        }
        return 0;
}




