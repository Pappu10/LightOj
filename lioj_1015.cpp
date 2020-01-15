#include<iostream>
using namespace std;
int main()
{
    int a,b,n,i,j=1;
    cin>>n;
    while(n--)
    {
        cin>>a;
        int c=0;
        for(i=0;i<a;i++)
        {
            cin>>b;
            if(b>0)
                c+=b;
        }
        cout<<"Case "<<j<<": "<<c<<endl;
        j++;
    }
    return 0;
}
