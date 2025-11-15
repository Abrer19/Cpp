#include <bits/stdc++.h>
using namespace std;

int spanningTree(int V, vector<vector<int>> adj[], vector<vector<int>> &mstEdges) {
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> vis(V, 0), parent(V, -1);
    int sum = 0;

    pq.push({0, 0});

    while(!pq.empty()) {
        auto it = pq.top();
        pq.pop();
        int node = it.second;
        int wt = it.first;

        if(vis[node]) continue;

        vis[node] = 1;
        sum += wt;

        if(parent[node] != -1) {
            mstEdges.push_back({parent[node], node, wt}); // store MST edge
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
    return sum;
}

int main() {
    int V, E;
    cin >> V >> E;

    vector<vector<int>> adj[V];
    vector<vector<int>> allEdges;

    for(int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
        allEdges.push_back({u, v, w}); // store all roads
    }

    vector<vector<int>> mstEdges;
    int mstCost = spanningTree(V, adj, mstEdges);

    cout << "MST Edges:\n";
    for(auto &e : mstEdges) {
        cout << e[0] << " - " << e[1] << " (" << e[2] << ")\n";
    }

    cout << "\nMST Cost = " << mstCost << "\n\n";

    cout << "Unnecessary Roads:\n";
    for(auto &e : allEdges) {
        bool inMST = false;
        for(auto &me : mstEdges) {
            if((me[0]==e[0] && me[1]==e[1]) || (me[0]==e[1] && me[1]==e[0])) {
                inMST = true;
                break;
            }
        }
        if(!inMST) {
            cout << e[0] << " - " << e[1] << " (" << e[2] << ")\n";
        }
    }

    return 0;
}
