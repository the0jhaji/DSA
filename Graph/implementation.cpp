#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;
class Graph{
    public:
    unordered_map<int , list<int>> adj;

    void addEdge(int u, int v, bool direction){
        //direction == 0 for undirected, 1 for directed
        adj[u].push_back(v);
        if(direction==0){
            adj[v].push_back(u);
        }
    }
    void printAdjList(){
        for(auto i: adj){
            cout<<i.first<<"->";
            for(auto j: i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }


};
int main()
{
    int n;
    cout << "Enter the number of nodes" << endl;
    cin >> n;

    cout << "Enter the number of edges:" << endl;
    int e;
    cin >> e;

    Graph g;

    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 1); // 0 = undirected
    }

    g.printAdjList();

    return 0;
}