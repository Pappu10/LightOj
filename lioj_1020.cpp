#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    unsigned int a,b=1,c,d,n,i,j;
    scanf("%u",&n);
    while(n--)
    {
        string s;
         scanf("%u",&a);
        a=a%3;
        cin>>s;
        if(s=="Bob")
        {
            if(a==0)
                printf("Case %u: Alice\n",b++);
            else
                printf("Case %u: Bob\n",b++);
        }
        else if(s=="Alice")
        {
            if(a==1)
                  printf("Case %u: Bob\n",b++);
            else
                printf("Case %u: Alice\n",b++);
        }
    }
    return 0;
}
