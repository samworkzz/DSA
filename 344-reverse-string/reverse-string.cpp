class Solution {
public:
    void usingRec(vector<char>& s, int index){
        int n=s.size();
        if(index>=(n/2)) return;
        swap(s[index], s[n-1-index]);
        usingRec(s,index+1);
    }
    void reverseString(vector<char>& s) {
        usingRec(s,0);
        return;
    }
};