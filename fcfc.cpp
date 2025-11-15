#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<vector<pair<int,int>>> adj(n+1);

    int isWeighted;
    cout << "Is the graph weighted? (1 = Yes, 0 = No): ";
    cin >> isWeighted;

    cout << "Enter edges:\n";
    if(isWeighted) {
        for(int i=0; i<m; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
        }
    } else {
        for(int i=0; i<m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back({v, -1000});
        }
    }

    cout << "\nAdjacency List:\n";
    for(int u=1; u<=n; u++) {
        cout << u << " -> ";
        for(auto edge : adj[u]) {
            cout << "(" << edge.first << "," << edge.second << ") ";
        }
        cout << "\n";
    }

    map<int,int> outdeg;
    cout << "\nOut-degrees:\n";
    for(int u=1; u<=n; u++) {
        int deg = adj[u].size();
        outdeg[u] = deg;
        cout << "Node " << u << " -> " << deg << "\n";
    }

    int delNode;
    cout << "\nEnter node to delete from map: ";
    cin >> delNode;
    outdeg.erase(delNode);

    cout << "\nMap after deletion:\n";
    for(auto [node, deg] : outdeg) {
        cout << "Node " << node << " -> " << deg << "\n";
    }

    cout << "\nCapacity per node:\n";
    for(int u=1; u<=n; u++) {
        cout << "Node " << u << " capacity = " << adj[u].capacity() << "\n";
    }

    return 0;
}
