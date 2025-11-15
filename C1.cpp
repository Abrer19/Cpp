#include <bits/stdc++.h>
using namespace std;

int spanningTree(int V, vector<vector<int>> adj[]) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> vis(V, 0), parent(V, -1);
    vector<pair<int,int>> unnecessaryEdges;
    int sum = 0;

    pq.push({0, 0});

    while(!pq.empty()) {
        auto it = pq.top();
        pq.pop();
        int node = it.second;
        int wt = it.first;

        if(vis[node]) {
            // Edge leading to already visited node is unnecessary
            if(parent[node] != -1)
              cout<<parent[node]<<" "<<node<<endl;
            continue;
        }

        vis[node] = 1;
        sum += wt;

        if(parent[node] != -1) {
            cout << parent[node] << " - " << node << " (" << wt << ")\n";
        }

        for(auto &edge : adj[node]) {
            int adjNode = edge[0];
            int edW = edge[1];
            if(!vis[adjNode]) {
                pq.push({edW, adjNode});
                parent[adjNode] = node;
            }
        }
    }

    // Print unnecessary edges
    cout << "\nUnnecessary edges (not in MST): ";
    for(auto &e : unnecessaryEdges) {
        cout << "{" << e.first << ", " << e.second << "} ";
    }
    cout << "\n";

    return sum;
}

int main() {
    int V, E;
    cin >> V >> E;

    vector<vector<int>> adj[V];

    for(int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    int mstCost = spanningTree(V, adj);
    cout << "\nMST Cost: " << mstCost << "\n";

    return 0;
}
