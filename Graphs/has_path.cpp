#include <bits/stdc++.h>
using namespace std;
bool haspath(vector<vector<int>>&edges,int v, int v1,int v2,int *visited)
{
   
    visited[v1]=1;
    for(int i=0;i<v;i++)
    {
        if(v1==i)
            continue;
        if(edges[v1][i]){
        if(!visited[i])
        {
            if(i==v2)
                return true;
            else{
                visited[i]=1;
                if (haspath(edges,v,i,v2,visited))
                    return true;
            }
        }
    }
    }
    return false;
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
    int v1,v2;
    cin>>v1>>v2;
    int *visited=new int[v];
    for(int i=0;i<v;i++)
        visited[i]=0;
    if(haspath(edges,v,v1,v2,visited))
        cout<<"true";
    else
    cout<<"false";
}