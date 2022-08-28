#include <bits/stdc++.h>

using namespace std;
void print(vector<vector<int>>&edges,int v,int sv,vector<int>&visited)
{
    cout<<sv<<' '; //print the start vertex as it is always present
    visited[sv]=1; //mark that the start vertex is visited
    for(int i=0;i<v;i++)
    {
        if(sv==i) //to avoid loop print on same vertex
            continue;
        if(edges[sv][i]==1) //if edges is there between two vertex check that if the vertex is already visited or not
        {
            if(!visited[i])
            {
                print(edges,v,i,visited);
            }
        }
    }
}
int main()
{
    int v,e;
    cout<<"Enter the total number of vertices"<<endl;
    cin>>v;
    cout<<"Enter the total number of edges"<<endl;
    cin>>e;
    vector<int>temp(v,0); //vector is made of size of vertices and all the value is initialized to 0
    vector<vector<int>>edges(v,temp); //adjancy matrix of size v*v is made as previously initialised vector is pushed
    vector<int>visited(v,0);//we create a hash table to cross check whether a vertex is already visited or not to avoid loop
    for(int i=0;i<e;i++)
    {
        cout<<"Enter the vertices between which connections should be made"<<endl; //user gives the edges between vertices where connection is made
        int vt1,vt2;
        cin>>vt1>>vt2;
        edges[vt1][vt2]=1;
        edges[vt2][vt1]=1;
    }
   print(edges,v,0,visited); //0 is starting vertex
    return 0;
}