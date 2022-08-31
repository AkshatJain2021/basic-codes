int frogJump(int n, vector<int> &dp,vector<int>&heights)
{
    if(n<=1)
        return 0;
    if(n==2)
        return abs(heights[0]-heights[1]);
    if(dp[n]!=-1)
        return dp[n];
    int ans1=frogJump(n-1,dp,heights);
    int ans2=frogJump(n-2,dp,heights);
    dp[n]=min(ans1+(abs(heights[n-1]-heights[n-2])),ans2+(abs(heights[n-1]-heights[n-3])));
        return dp[n];
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    vector<int>dp(n+1,-1);
    return frogJump(n,dp,heights);
}