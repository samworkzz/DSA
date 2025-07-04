class Solution {
public:
    void rec(string num1, string num2, int index, int carry, string &ans) {
        if (index >= num1.size() && index >= num2.size()) {
            if (carry != 0) {
                ans = char(carry + '0') + ans;
            }
            return;
        }
        
        int d1 = (index < num1.size()) ? (num1[num1.size() - index - 1] - '0') : 0;
        int d2 = (index < num2.size()) ? (num2[num2.size() - index - 1] - '0') : 0;
        
        int sum = d1 + d2 + carry;
        carry = sum / 10;
        int digit = sum % 10;
        
        ans = char(digit + '0') + ans;
        rec(num1, num2, index + 1, carry, ans);
    }
    
    string addStrings(string num1, string num2) {
        string ans = "";
        rec(num1, num2, 0, 0, ans);
        return ans;
    }
};