#include <unordered_map>
#include <string>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s; // Edge case: no zigzag needed
        
        unordered_map<int, string> mp;
        bool forward = true;
        int i = 0;
        
        for (char x : s) {
            mp[i].push_back(x);
            
            if (forward) {
                i++;
                if (i == numRows - 1) {
                    forward = false;
                }
            } else {
                i--;
                if (i == 0) {
                    forward = true;
                }
            }
        }
        
        string ans;
        for (int j = 0; j < numRows; j++) {
            ans += mp[j];
        }
        return ans;
    }
};