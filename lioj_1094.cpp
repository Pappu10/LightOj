#include<bits/stdc++.h>
using namespace std;
vector<int>edge[30001],dist[30001];
bool visit[30001];
int arr[30001];
int co=0;
void bfs1(int n)
{
    queue<int>q;
    int s=0,t=n;
    q.push(n);
    memset(visit,0,sizeof visit);
    visit[n]=1;
    memset(arr,0,sizeof arr);

    while(!q.empty())
    {
        int a=q.front();
        q.pop();
        for(int i=0;i<edge[a].size();i++)
        {
            if(visit[edge[a][i]]==0)
            {
               visit[edge[a][i]] = 1;
               q.push(edge[a][i]);
               arr[edge[a][i]] = dist[a][i] + arr[a];
              // cout<<i<<" "<<edge[a][i]<<" "<< arr[edge[a][i]]<<"  "<<s<<endl;
                if( arr[edge[a][i]]>s)
                {
                s= arr[edge[a][i]];
                t= edge[a][i];
               }
            }
        }
    }
    cout<<"Case "<<++co<<": "<<s<<endl;
}
void bfs(int n)
{
    queue<int>q;
    int s=0,t=n;
    q.push(n);
    memset(visit,0,sizeof visit);
    visit[n]=1;
    memset(arr,0,sizeof arr);

    while(!q.empty())
    {
        int a=q.front();
        q.pop();
        for(int i=0;i<edge[a].size();i++)
        {
            if(visit[edge[a][i]]==0)
            {
               visit[edge[a][i]] = 1;
               q.push(edge[a][i]);
               arr[edge[a][i]] = dist[a][i] + arr[a];
             //  cout<<i<<" "<<edge[a][i]<<" "<< arr[edge[a][i]]<<"  "<<s<<endl;
                if( arr[edge[a][i]]>s)
                {
                s= arr[edge[a][i]];
                t= edge[a][i];
               }
            }
        }
    }
   // cout<<t<<endl;
    bfs1(t);
}
int main()
{
    int i,j,n,m,a,b,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        for(j=0;j<m-1;j++)
        {
            scanf("%d%d%d",&a,&b,&c);
            edge[a].push_back(b);
            edge[b].push_back(a);
            dist[a].push_back(c);
            dist[b].push_back(c);
        }
        bfs(0);
        for(int k =0; k<m;k++)
        {
            edge[k].clear();
            dist[k].clear();
        }
    }
    return 0;
}


