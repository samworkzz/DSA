class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int r=0;
        int count=0;
        int n=nums.size();
        int ans=INT_MIN;
        while(r<n){
            if(nums[r]==1){
                count++;
            }
            else{
                ans=max(ans,count);
                count=0;
            }
            r++;
        }
        ans=max(ans,count);
        return ans;
    }
};