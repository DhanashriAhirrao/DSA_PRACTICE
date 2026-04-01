// leetcode Q739
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && temperatures[st.top()]<temperatures[i]){
                temperatures[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            temperatures[st.top()]=0;
            st.pop();
        }
        return temperatures;
    }
};

