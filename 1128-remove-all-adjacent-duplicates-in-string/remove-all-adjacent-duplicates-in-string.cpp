class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.size();
        stack<char>st;

        for(char c:s){
            if(!st.empty() && c==st.top()){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        string ans="";
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
    }
};