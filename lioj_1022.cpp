#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    double a,b,c,e,pi;
    pi=2*acos(0.0);
    int n,p=1;
    cin>>n;
    while(n--)
    {

        cin>>a;
        b=2*pi*a*a;
        c=((4*a)*(4*a))/2;
        e=(c-b)/2;
        cout<<fixed<<"Case "<<p<<": "<<setprecision(2)<<e<<endl;
        p++;
    }
    return 0;
}
