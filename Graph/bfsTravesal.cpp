#include <vector>
#include <queue>
using namespace std;

void bfs(vector<vector<int>> &adj, vector<bool> &visited,
         vector<int> &ans, int node)
{

    queue<int> q;
    q.push(node);
    visited[node] = true;

    while (!q.empty())
    {
        int frontNode = q.front();
        q.pop();

        ans.push_back(frontNode);

        for (auto neighbour : adj[frontNode])
        {
            if (!visited[neighbour])
            {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj)
{
    vector<int> ans;
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            bfs(adj, visited, ans, i);
        }
    }

    return ans;
}