class Solution
{
public:
    bool binarySearch(vector<int> &arr, int target)
    {
        int s = 0, e = arr.size() - 1;

        while (s <= e)
        {
            int mid = s + (e - s) / 2;

            if (arr[mid] == target)
                return true;
            else if (arr[mid] < target)
                s = mid + 1;
            else
                e = mid - 1;
        }
        return false;
    }

    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        sort(nums2.begin(), nums2.end()); // only need to sort one

        set<int> st; // to keep unique elements

        for (int x : nums1)
        {
            if (binarySearch(nums2, x))
            {
                st.insert(x);
            }
        }

        return vector<int>(st.begin(), st.end());
    }
};