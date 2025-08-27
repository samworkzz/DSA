class Solution {
public:
    vector<int>nextSmallerElement(vector<int>heights){
        stack<int>st;
        st.push(-1);
        int n=heights.size();
        vector<int>nse(n);
        for(int i=n-1;i>=0;i--){
            int curr=heights[i];
            while(st.top()!=-1 && curr<=heights[st.top()]) st.pop();
            nse[i]=st.top();
            st.push(i);
        }
        return nse;
    }
    vector<int>previousSmallerElement(vector<int>heights){
        stack<int>st;
        st.push(-1);
        int n=heights.size();
        vector<int>pse(n);
        for(int i=0;i<n;i++){
            int curr=heights[i];
            while(st.top()!=-1 && curr<=heights[st.top()]) st.pop();
            pse[i]=st.top();
            st.push(i);
        }
        return pse;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int>next=nextSmallerElement(heights);
        vector<int>prev=previousSmallerElement(heights);
        for(int i=0;i<next.size();i++){
            if(next[i]==-1){
                next[i]=next.size();
            }
        }
        int ans=INT_MIN;
        for(int i=0;i<heights.size();i++){
            ans=max(ans,heights[i]*abs(next[i]-prev[i]-1));
        }
        return ans;
    }
};