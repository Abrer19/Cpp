#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> original(n, vector<int>(n, INF));
    for (int i = 0; i < n; i++) original[i][i] = 0;

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        original[u][v] = w;
        original[v][u] = w;
    }

    int src, dest;
    cin >> src >> dest;

    int q;
    cin >> q;

    while (q--) {
        int r;
        cin >> r;

        // Reset distance matrix from original
        vector<vector<int>> dist = original;

        // Floyd-Warshall excluding node r as intermediate
        for (int k = 0; k < n; k++) {
            if (k == r) continue;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (dist[i][k] < INF && dist[k][j] < INF)
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }

        cout << "distance from " << src << " to " << dest << ": ";
        if (dist[src][dest] == INF)
            cout << "INF" << endl;
        else
            cout << dist[src][dest] << endl;
    }

    return 0;
}
