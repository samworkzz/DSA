class Solution {
public:
    int rec(int i, vector<int>& cost,vector<int>&dp) {
        if (i >= cost.size()) return 0; // 
        if(dp[i]!=-1) return dp[i];
        int cost1 = cost[i] + rec(i + 1, cost, dp);
        int cost2 = cost[i] + rec(i + 2, cost, dp);
        
        dp[i]= min(cost1, cost2);
        return dp[i]; 
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return min(rec(0, cost,dp), rec(1, cost, dp));
    }
};