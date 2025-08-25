class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n=part.size();
        while(s.find(part)!=string::npos){
            size_t index=s.find(part);
            s.erase(index,n);
        }
        return s;
    }
};