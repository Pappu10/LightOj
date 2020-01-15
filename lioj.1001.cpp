#include<iostream>
using namespace std;
int main()
{
    int a,n,b;
    cin>>n;
    while(n--)
    {
        cin>>a;
        b=0;
        if(a>10)
        {
            b=a-10;
            a=10;
        }
      cout<<a<<" "<<b<<endl;
    }
    return 0;
}
