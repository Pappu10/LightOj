#include<iostream>
#include<cstdio>
#include<math.h>
int prime[664580];
bool array1[10000002];
int s=1;
inline void fun()
{
    int i,j,p;
    p=sqrt(10000000);
    for(i=4;i<=10000000;i+=2)
        array1[i]=1;
    prime[s]=2;
    array1[1]=1;
    array1[2]=0;
    for(i=3;i<=10000000;i+=2)
    {
        if(array1[i]!=1)
        {
            prime[++s]=i;
            array1[i]=0;
            if(i<=p)
            {
                for(j=i*i;j<=10000000;j+=i*2)
                    array1[j]=1;
            }
        }
    }
}
int main()
{
    fun();
    int a,b,c,n,i,k,l=0;
    scanf("%d",&n);
    while(n--)
    {
        l++;
        scanf("%d",&b);
        a=b/2;
        c=0;
        i=1;
        while(prime[i]<=a){
            k=b-prime[i];
            if(array1[k]==0)
            {
                ++c;
            }
            ++i;
        }
        printf("Case %d: %d\n",l,c);
    }
    return 0;
}
