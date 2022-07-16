void rotateby90(int n, int matrix[][n]) 
{
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        int k=0;
        for(int j=n-1;j>=0;j--)
        {
            arr[k++][i]=matrix[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            matrix[i][j]=arr[i][j];
        }
    }
} 