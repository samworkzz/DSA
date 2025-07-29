class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        // int i,ans;
        // sort(nums.begin(), nums.end()); 
        // for (int i = 0; i < n; i++) {
        //     if (nums[i]!=i){
        //         ans=i;
        //         break;
        //     }
        // }
        // return ans;

        vector<bool>check(n+1,false);
        for(int i=0;i<n;i++){
            check[nums[i]]=true;
        }
        for(int i=0;i<n+1;i++){
            if(check[i]==false) return i;
        }
        return -1;
    }
};