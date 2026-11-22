class Solution {
public:
    bool checkString(string s) {
        // string ans = s;
        // sort(ans.begin(), ans.end());
        // return ans == s;
        for (int i = 1; i < s.size(); i++) {
            if (s[i - 1] == 'b' && s[i] == 'a')
                return false;
        }
        return true;
    }
};