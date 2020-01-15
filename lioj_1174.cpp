#include<bits/stdc++.h>
using namespace std;
vector<int>adj[101];
bool visit[101],visit1[101];
int aa[101],a[101];
int m,k=0;
void bfs1(int s,int d)
{
    queue<int>q;
    memset(a,0,sizeof a);
    memset(visit1,0,sizeof visit1);
    if(s==d)
    {
        if((a[d]+aa[s])>m)
            m=a[d]+aa[s];
    }
   else
    {
     q.push(s);

     visit1[s]=1;
     int vv=0;
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        int f=0;
        for(int i=0;i<adj[p].size();i++)
        {
            int ll=0;
            if(visit1[ adj[p][i] ]==0)
            {

                a[adj[p][i]]= a[p]+1;
                q.push(adj[p][i]);
                visit1[adj[p][i]] = 1;
                if(adj[p][i]==d)
                {
                   f=1;
                }
            }
        }
            if(f==1)
                break;
    }
    if((a[d]+aa[s])>m)
        m=a[d]+aa[s];
    }
}

void bfs(int c,int d,int a,int b)
{
    m=0;
    memset(aa,0,sizeof aa);
    memset(visit,0,sizeof visit);
    queue<int>q;
    q.push(c);
    visit[c]=1;
    while(!q.empty())
    {
        int s=q.front();
        q.pop();
        for(int i=0;i<adj[s].size();i++)
        {
            int ll=0;
            if(visit[ adj[s][i] ]==0)
            {
                q.push(adj[s][i]);
                visit[adj[s][i]] = 1;
                ll=1;
                aa[adj[s][i]]=aa[s]+1;

            }
            if(ll==0)
            {
                bfs1(s,d);
            }
        }
    }
   printf("Case %d: %d\n",++k,m);

}
int main()
{
    int n,a,b,c,d,u,v;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        for(int i=0;i<b;i++)
        {
            scanf("%d%d",&u,&v);
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        scanf("%d%d",&c,&d);
        bfs(c,d,a,b);
        for(int i=0;i<a;i++)
        {
            adj[i].clear();
        }
    }
return 0;
}
