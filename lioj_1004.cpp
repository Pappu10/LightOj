#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        int b[a],c[a+1],d[a+1];
        scanf("%d",&b[0]);

        c[0] = b[0];
        d[0] = c[0];

        for(int j=1;j<a;j++)
        {
            for(int k=0;k<=j;k++)
            {
               scanf("%d",&b[k]);

            }
            d[0] = b[0] + c[0];

            for(int k=1;k<j;k++)
            {

                d[k] = max(c[k]+b[k], c[k-1]+b[k]);

            }

            d[j] = b[j]+c[j-1];


            for(int k=0;k<=j;k++)
            {
                c[k] = d[k];

            }


        }

      for(int j=0; j<a-1 ; j++)
      {
          for(int k=0;k<a-j-1;k++)
          {
              scanf("%d",&b[k]);
          }
          for(int k=0;k<a-j-1;k++)
          {
              d[k] = max(b[k]+c[k], b[k]+c[k+1]);
          }
          for(int k=0; k<a-j-1;k++)
          {
              c[k] = d[k];

          }

      }
      printf("Case %d: %d\n",i+1,c[0]);

    }
 return 0;
}
