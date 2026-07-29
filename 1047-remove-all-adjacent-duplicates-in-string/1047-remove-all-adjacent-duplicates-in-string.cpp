class Solution {
public:
    string removeDuplicates(string s) {
        string result="";
        stack<char> st;
        for(char ch:s){
            if(!st.empty() && st.top()==ch){
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());

        return result;
    }
};