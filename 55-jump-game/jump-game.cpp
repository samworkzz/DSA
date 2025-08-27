class Solution {
public:
    // bool rec(int i, vector<int>nums){
    //     if(i>=nums.size()) return false;
    //     if(i==nums.size()-1) return true;
    //     int curr=nums[i];
    //     while(curr>0){
    //         if(rec(i+curr,nums)) return true;
    //         else curr--;
    //     }
    //     return false;
    // }
    bool canJump(vector<int>& nums) {
    int n = nums.size();
    int target = n - 1;
    
    for (int i = n - 2; i >= 0; i--) {
        if (i + nums[i] >= target) {
            target = i; // If we can reach current target from i, update target
        }
    }
    
    return target == 0;
}
};