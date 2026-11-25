class Solution {
public:
    using ull = unsigned long long;

    bool check(vector<int>& nums, int len) {
        int n = nums.size();

        const ull BASE = 100007;

        vector<ull> power(n + 1, 1);
        vector<ull> pref(n + 1, 0);

        for (int i = 0; i < n; i++) {
            power[i + 1] = power[i] * BASE;
            pref[i + 1] = pref[i] * BASE + nums[i] + 1;
        }

        unordered_map<ull, int> freq;

        for (int i = 0; i + len <= n; i++) {
            ull hash =
                pref[i + len] - pref[i] * power[len];

            freq[hash]++;
        }

        for (auto &p : freq) {
            if (p.second == 1)
                return true;
        }

        return false;
    }

    int smallestUniqueSubarray(vector<int>& nums) {
        int n = nums.size();

        int low = 1, high = n;
        int ans = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (check(nums, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};