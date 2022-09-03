#include <bits/stdc++.h>

using namespace std;
void DFS(vector<vector<int>>&edges,int sv,int v,int*visited)
{
    cout<<sv<<' ';
    visited[sv]=1;
    for(int i=0;i<v;i++)
    {
        if(sv==i)
        continue;
        if(edges[sv][i])
        {
            if(!visited[i])
                DFS(edges,i,v,visited);
        }
    }
}
int main()
{
    int v,e;
    cin>>v>>e;
    vector<int>vect(v,0);
vector<vector<int>>edges(v,vect);
for(int i=0;i<e;i++)
{
    int edge1,edge2;
    cin>>edge1>>edge2;
    edges[edge1][edge2]=1;
    edges[edge2][edge1]=1;
}
int *visited=new int[v];
for(int i=0;i<v;i++)
{
    visited[i]=0;
}
for(int i=0;i<v;i++)
{
    if(!visited[i])
        DFS(edges,i,v,visited);
}
    return 0;
}