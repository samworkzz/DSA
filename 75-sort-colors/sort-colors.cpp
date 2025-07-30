class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r,b,w=0;
        for(int color:nums){
            if(color==0) r++;
            else if(color==1) w++;
            else b++;
        }

        for(int i=0;i<nums.size();i++){
            if(i<r) nums[i]=0;
            else if(i>=r && i<r+w) nums[i]=1;
            else nums[i]=2;
        }
    }
};