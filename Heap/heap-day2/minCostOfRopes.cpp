class Solution
{
public:
    int minCost(vector<int> &arr)
    {
        priority_queue<long long, vector<long long>, greater<long long>> pq;

        for (int x : arr)
        {
            pq.push(x);
        }

        long long cost = 0;

        while (pq.size() > 1)
        {
            long long a = pq.top();
            pq.pop();

            long long b = pq.top();
            pq.pop();

            long long sum = a + b;
            cost += sum;

            pq.push(sum);
        }

        return cost;
    }
};