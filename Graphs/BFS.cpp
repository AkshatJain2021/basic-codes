/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void printDFS(vector<vector<int>>&edges,int v,int sv)
{
    int *visited=new int[v];
    for(int i=0;i<v;i++)
    {
        visited[i]=0;
    }
    queue<int>pendingvertices;
    pendingvertices.push(sv);
    visited[sv]=1;
    while(!(pendingvertices.empty()))
    {
        int curr=pendingvertices.front();
        cout<<curr<<' ';
        pendingvertices.pop();
        for(int i=0;i<v;i++)
        {
            if(edges[curr][i])
            {
                if(!visited[i])
                {
                    pendingvertices.push(i);
                    visited[i]=1;
                }
            }
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
printDFS(edges,v,1);
    return 0;
}