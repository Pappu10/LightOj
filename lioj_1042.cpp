#include<iostream>
#include<cstdio>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
    unsigned int a,b,i,j,c,n,s,p,d,e,f=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        p=0,s=0,c=0,j=0,i=0,e=0;
        b=a;
        while(a>0)
        {
          if(a%2==0 && s==1&&e==0)
          {
              i=p;
              j=(p+1);
              e=1;
          }
          if(a%2==1)
             {
                ++p;
                s=1;
                a=a/2;
                c=(c*10)+s;
            }

            else if(a%2==0)
            {
                ++p;
                s=0;
                a=a/2;
                c=(c*10)+s;
            }

        }
        if(i==0&&j==0)
        {
            d=pow(2,p)-pow(2,p-1)+b;
            cout<<++f<<"  "<<d<<endl;
        }
        else
        {
            i=i-1;
            j=j-1;
            d=pow(2,j)-pow(2,i)+b;
            int q,r,u=1;
            r=j+1;
            while(r--)
            {
                if(b%2==0){
                    q++;
                    u=u+((u-1)*2);
                }
                    b=b/2;
            }
            d=d-u;
            cout<<++f<<"  "<<d<<endl;

        }
        cout<<c<<"  "<<j<<" "<<i<<endl;

    }
}
