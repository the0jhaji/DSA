#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
int main()
{
    vector<int> nums;

    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(1);

    Solution obj;
    cout << obj.removeElement(nums, 1) << endl;

    return 0;
}