class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3) return false;
        int i=0;
        while(arr[i]<arr[i+1]){
            if(i+1==n-1) return false;
            else i++;
        }
        while(arr[i]>arr[i+1]){
            if(i==0) return false;
            if(i+1==n-1) break;
            i++;
        }
        if(i+1!=n-1) return false;
        else{
            if(arr[n-2]>arr[n-1]) return true;
            else return false;
        }

    }
};