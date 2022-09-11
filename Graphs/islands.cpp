#include <iostream>
#include<vector>
using namespace std;
void solve(vector<vector<int>>edges,int sv,int v,int*visited)
{
    visited[sv]=1;
    for(int i=0;i<v;i++)
    {
        if(i==sv)
            continue;
        if(edges[sv][i])
        {
            if(!visited[i])
            {
                solve(edges,i,v,visited);
            }
        }
    }
}
int main() {
    // Write your code here
    int e,v;
    cin>>v>>e;
    vector<int>vec(v,0);
    vector<vector<int>>edges(v,vec);
    for(int i=0;i<e;i++)
    {
        int edge1,edge2;
        cin>>edge1>>edge2;
        edges[edge1][edge2]=1;
        edges[edge2][edge1]=1;
    }
    int *visited=new int[v];
    for(int i=0;i<v;i++)
        visited[i]=0;
    int count=0;
    for(int i=0;i<v;i++)
    {
        if(visited[i]==0)
        {
            count++;
            solve(edges,i,v,visited);
        }
    }
    cout<<count;
}