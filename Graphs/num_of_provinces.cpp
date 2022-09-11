class Solution {
  public:
    void numprovinces(vector<vector<int>> adj,int sv,int v,int *visited)
    {
        visited[sv]=1;
        for(int i=1;i<=v;i++)
        {
            if(sv==i)
            continue;
            if(adj[sv-1][i-1])
            {
                if(!visited[i])
                {
                    visited[i]=1;
                    numprovinces(adj,i,v,visited);
                }
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        int *visited=new int[V+1];
        for(int i=1;i<=V;i++)
        {
            visited[i]=0;
        }
        int count=0;
        for(int i=1;i<=V;i++)
        {
            if(!visited[i])
            {
                count++;
                numprovinces(adj,i,V,visited);
            }
        }
        return count;
    }
};