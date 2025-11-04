class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<=n-k;i++){
            unordered_map<int,int>count;
            for(int j=i;j<i+k;j++){
                count[nums[j]]++;
            }
            vector<pair<int,int>>freq;
            for(auto x: count){
                freq.emplace_back(x.second, x.first);
            }
            sort(freq.begin(),freq.end(), greater<pair<int,int>>());
            int xsum=0;
            for(int j=0;j<x && j<freq.size();j++){
                xsum+=freq[j].first*freq[j].second;
            }
            ans.push_back(xsum);
        }
        return ans;
    }
};