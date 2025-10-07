class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int s = 0;
        int e = 1;
        if (e + 1 > arr.size())
            return false;
        while (s < arr.size() && arr[s] % 2 == 0)
            s++;
        if (s == arr.size())
            return false;
        e = s + 2;
        while (e < arr.size()) {
            if (arr[s] % 2 == 0)
                s++;
            else {
                if (arr[s + 1] % 2 != 0 && arr[e] % 2 != 0) {
                    return true;
                } else {
                    if (arr[s + 1] % 2 == 0) {
                        s++;
                    }
                    if (arr[e] % 2 == 0) {
                        s = e + 1;
                    }
                }
            }
            e = s + 2;
        }
        return false;
    }
};