#include <bits/stdc++.h>
using namespace std;
void isconnected(vector<vector<int>>&edges,int v,int *visited,int sv)
{
    visited[sv]=1;
    for(int i=0;i<v;i++)
    {
        if(sv==i)
            continue;
        if(edges[sv][i]==1)
        {
            if(!visited[i]){
                visited[i]=1;
            isconnected(edges,v,visited,i);
            }
        }
    }
}
int main() {
    // Write your code here
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
     isconnected(edges,v,visited,0);
         bool var=0;
         for(int i=0;i<v;i++)
         {
             if(!visited[i]){
                 var=1;
                 cout<<"false";
             break;
             }
         }
    if(!var)
        cout<<"true";
    
}