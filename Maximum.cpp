#include <bits/stdc++.h>
using namespace std;

int findParent(int node, vector<int>& parent) {
    if (parent[node] == node) return node;
    return parent[node] = findParent(parent[node], parent);
}

void unionSets(int u, int v, vector<int>& parent, vector<int>& rank) {
    u = findParent(u, parent);
    v = findParent(v, parent);
    if (u != v) {
        if (rank[u] < rank[v]) {
            parent[u] = v;
        } else if (rank[v] < rank[u]) {
            parent[v] = u;
        } else {
            parent[v] = u;
            rank[u]++;
        }
    }
}


bool cmp(vector<int>& a, vector<int>& b) {
    return a[2] > b[2];
}

int spanningTree(int V, vector<vector<int>>& edges) {
    sort(edges.begin(), edges.end(), cmp);

    vector<int> parent(V), rank(V, 0);
    for (int i = 0; i < V; i++) parent[i] = i;

    int sum = 0;
    cout << "MST Edges:\n";

    for (auto &e : edges) {
        int u = e[0], v = e[1], w = e[2];
        int pu = findParent(u, parent);
        int pv = findParent(v, parent);
        if (pu != pv) {
            sum += w;
            cout << u << " - " << v << " (" << w << ")\n";
            unionSets(pu, pv, parent, rank);
        }
    }

    return sum;
}

int main() {
    int V, E;

    cin >> V >> E;

    vector<vector<int>> edges;

    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
    }

    int mstCost = spanningTree(V, edges);
    cout << mstCost << "\n";

    return 0;
}
