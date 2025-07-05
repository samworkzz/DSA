class Solution {
public:
    bool rec(const string &s, const string &t, int i, int j, vector<vector<int>> &dp) {
        if (i == s.size()) return true;  // All characters matched
        if (j == t.size()) return false; // Reached end of t but not s
        
        if (dp[i][j] != -1) return dp[i][j]; // Return cached result
        
        if (s[i] == t[j]) {
            dp[i][j] = rec(s, t, i + 1, j + 1, dp); // Match, move both
        } else {
            dp[i][j] = rec(s, t, i, j + 1, dp); // Skip t[j]
        }
        
        return dp[i][j];
    }
    
    bool isSubsequence(string s, string t) {
        vector<vector<int>> dp(s.size(), vector<int>(t.size(), -1));
        return rec(s, t, 0, 0, dp);
    }
};