class Solution {
public:
    bool validDigit(int n, int x) {
        string s=to_string(n);
        char ch = x + '0';
        if(s[0]==ch){
            return false;
        }
        for(int i=1; i<s.size(); i++){
            if(s[i]==ch){
                return true;
            }
        }
        return false;

    }
};