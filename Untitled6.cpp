#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> dist(n, vector<int>(n, INF));
    vector<vector<int>> cnt(n, vector<int>(n, 0));

    // Input edges
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        u--, v--; // 0-based index
        dist[u][v] = w;
        cnt[u][v] = 1; // One direct path initially
    }

    // Distance to self is zero
    for (int i = 0; i < n; i++) {
        dist[i][i] = 0;
        cnt[i][i] = 1;
    }

    // Floyd-Warshall with path counting
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    cnt[i][j] = cnt[i][k] * cnt[k][j];
                } else if (dist[i][k] + dist[k][j] == dist[i][j] && dist[i][j] != INF) {
                    cnt[i][j] += cnt[i][k] * cnt[k][j];
                }
            }
        }
    }

    // Output the number of shortest paths
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            cout << i + 1 << " " << j + 1 << " => " << cnt[i][j] << endl;
        }
    }

    return 0;
}
