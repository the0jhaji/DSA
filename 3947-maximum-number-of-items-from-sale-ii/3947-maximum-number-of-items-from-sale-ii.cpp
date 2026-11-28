
class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n = items.size();

        // Step 1: Find minimum price and maximum factor
        int minPrice = INT_MAX;
        int maxFactor = 0;

        vector<int> freq(n + 1, 0);

        for (auto &item : items) {
            int factor = item[0];
            int price = item[1];

            minPrice = min(minPrice, price);
            maxFactor = max(maxFactor, factor);

            freq[factor]++;
        }

        // Step 2: Count items whose factors are multiples
        vector<int> gain(maxFactor + 1, 0);

        for (int i = 1; i <= maxFactor; i++) {
            for (int j = i; j <= maxFactor; j += i) {
                gain[i] += freq[j];
            }

            // Exclude the item itself
            gain[i]--;
        }

        // Step 3: Collect profitable bonus purchases
        vector<pair<int, int>> deals;

        for (auto &item : items) {
            int factor = item[0];
            int price = item[1];

            if (gain[factor] > 0 && price <= 2LL * minPrice) {
                deals.push_back({price, gain[factor]});
            }
        }

        // Step 4: Sort by increasing price
        sort(deals.begin(), deals.end());

        long long ans = 0;

        // Step 5: Buy bonus purchases first
        for (auto &[price, count] : deals) {

            long long buy = min(
                (long long)count,
                (long long)budget / price
            );

            ans += buy * 2;
            budget -= buy * price;
        }

        // Step 6: Buy normal items with remaining budget
        ans += budget / minPrice;

        return (int)ans;
    }
};
