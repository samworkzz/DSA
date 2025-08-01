class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int pp=0;
        int np=1;
        vector<int>ans(n);
        
        for(int i=0;i<n;i++){
            if(nums[i]>0) {
                ans[pp]=nums[i];
                pp+=2;
            }
            else{
                ans[np]=nums[i];
                np+=2;
            }
        }
        return ans;
    }
};