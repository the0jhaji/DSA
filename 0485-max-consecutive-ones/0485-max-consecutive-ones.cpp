class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int newcount=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                count++;
            }
            else{
                newcount=max(newcount, count);
                count=0;
            }
        }
        return max(newcount,count);
    }
};