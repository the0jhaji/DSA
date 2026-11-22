class Solution {
public:
    bool checkString(string s) {
        string ans = s;
        sort(ans.begin(), ans.end());
        return ans == s;
    }
};