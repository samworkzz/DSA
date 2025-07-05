class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>count;
        int ans=-1;
        for(int a:arr){
            count[a]++;
        }
        for(auto x: count){
            if(x.first==x.second){
                ans=max(ans,x.first);
            }
        }
        return ans;
    }
};