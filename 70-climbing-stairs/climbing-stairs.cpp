class Solution {
public:
    int rec(int n, int i, vector<int>&dp){
        if(i==n) return 1;
        else if(i>n) return 0;
        int ans1=0;
        int ans2=0;
        if(dp[i]!=-1) return dp[i];
        ans1=rec(n,i+1,dp);
        ans2=rec(n,i+2,dp);
        dp[i]=ans1+ans2;
        return dp[i];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return rec(n,0,dp);
    }
};