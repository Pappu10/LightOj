#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    unsigned int a,i,n;
    i=1;
    scanf("%d",&n);
    while(n--)
    {
        cin>>a;
        if((__builtin_popcount (a))%2==0)
           // cout<<"Case "<<i++<<": "<<"even"<<endl;
            printf("Case %d: even\n",i++);
        else
             printf("Case %d: odd\n",i++);
    }
    return 0;
}
