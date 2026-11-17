class Solution {
public:
    int minimumChanges(string s, int k) {
        int n = s.size();
        const int INF = 1e9;

        vector<vector<int>> cost(n, vector<int>(n, INF));

        vector<vector<int>> divs(n + 1);
        for (int len = 2; len <= n; len++) {
            for (int d = 1; d < len; d++) {
                if (len % d == 0)
                    divs[len].push_back(d);
            }
        }

        for (int l = 0; l < n; l++) {
            for (int r = l + 1; r < n; r++) {

                int len = r - l + 1;

                for (int d : divs[len]) {

                    int cur = 0;

                    for (int start = 0; start < d; start++) {

                        int left = start;
                        int right = len - d + start;

                        while (left < right) {
                            if (s[l + left] != s[l + right])
                                cur++;

                            left += d;
                            right -= d;
                        }
                    }

                    cost[l][r] = min(cost[l][r], cur);
                }
            }
        }

        vector<vector<int>> dp(k + 1, vector<int>(n + 1, INF));
        dp[0][0] = 0;

        for (int part = 1; part <= k; part++) {

            for (int i = 2 * part; i <= n; i++) {

                for (int t = (part - 1) * 2; t <= i - 2; t++) {

                    if (dp[part - 1][t] == INF)
                        continue;

                    dp[part][i] = min(
                        dp[part][i],
                        dp[part - 1][t] + cost[t][i - 1]
                    );
                }
            }
        }

        return dp[k][n];
    }
};