#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    long long i=1,n,a,b,c;
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a==1)
            cout<<"Case "<<i<<": "<<a<<" "<<a<<endl;
        else
        {
            long long
            int x,y,z,p;
             b=ceil(sqrt(a));
             c=b-1;
             if(b%2==1)
             {
                 x=(b*b)-(c*c)+1;
                 y=(c*c)+b;
                 if(a==y)
                    cout<<"Case "<<i<<": "<<b<<" "<<b<<endl;
                 else if(a>y)
                 {
                     p=(b*b)-a+1;
                     cout<<"Case "<<i<<": "<<p<<" "<<b<<endl;
                 }
                 else
                 {
                     p=a-(c*c);
                     cout<<"Case "<<i<<": "<<b<<" "<<p<<endl;
                 }
             }
             else
             {
                 x=(b*b)-(c*c)+1;
                 y=(c*c)+b;
                 if(a==y)
                    cout<<"Case "<<i<<": "<<b<<" "<<b<<endl;
                 else if(a>y)
                 {
                     p=(b*b)-a+1;
                     cout<<"Case "<<i<<": "<<b<<" "<<p<<endl;
                 }
                 else
                 {
                     p=a-(c*c);
                     cout<<"Case "<<i<<": "<<p<<" "<<b<<endl;
                 }
             }


        }
     i++;
    }
    return 0;
}
