class Solution {
public:
    int solve(int n, int k, int flip){
        if(n==1){
            return flip%2==0?0:1;
        }
        if(k%2==0){
            return solve(n-1, k/2, flip+1);
        }
        return solve(n-1, (k+1)/2, flip);
    }
    int kthGrammar(int n, int k) {
        return solve(n, k, 0);
    }
};