#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

template <typename T>
class Graph
{
public:
    unordered_map<T, list<T>> adj;

    // direction = 0 -> Undirected
    // direction = 1 -> Directed
    void addEdge(T u, T v, bool direction)
    {
        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto &node : adj)
        {
            cout << node.first << " -> ";
            for (auto &neighbor : node.second)
            {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n, e;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> e;

    Graph<int> g; // Change to Graph<char> or Graph<string> if needed

    cout << "Enter the edges:\n";
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0); // 0 = undirected
    }

    cout << "\nAdjacency List:\n";
    g.printAdjList();

    return 0;
}