class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>indegree(n+1,0);
        vector<int>outdegree(n+1,0);

        for(auto&t: trust){
            int out=t[0];
            int in=t[1];

            indegree[in]++;
            outdegree[out]++;
        }

        for(int i=1;i<=n;i++){
            if(indegree[i]==n-1 && outdegree[i]==0) return i;
        }
        return -1;
    }
};