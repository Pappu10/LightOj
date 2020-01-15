#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,k,j,i,n,p;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&a);
        int s,t,ans=0;
        vector<int>adj[20002];
      //  bool visit [20005];

        int a1[20002];
        memset(a1, 0, sizeof a1);
        for(j=0;j<a;j++)
        {
            scanf("%d%d",&s,&t);
            adj[s].push_back(t);
            adj[t].push_back(s);
        }
        for(i=0;i<20002;i++)
        {
            if(!adj[i].empty() && a1[i]== 0)
            {
                int w,r;
                w=0;
                r=0;
                queue<int>q;
                q.push(i);
                a1[i]= 1;
                w++;

                while(!q.empty())
                {

                    p=q.front();
                    q.pop();

                    for(vector<int>::iterator it = adj[p].begin(); it!= adj[p].end(); it++)
                    {
                        cout<<*it<<endl;
                        if(a1[*it] == 0)
                        {
                          q.push(*it);

                          if(a1[p] == 1)
                          {
                            a1[*it]=2;
                            r++;
                          }
                          else
                          {
                              a1[*it] = 1;
                              w++;
                          }
                        }
                    }
                }
                 ans = ans + max(w,r);
            }
        }
     printf("Case %d: %d\n",k+1,ans);

    }
 return 0;
}
