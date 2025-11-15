//Floyd Warshall Shortest Path
#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> dist(n, vector<int>(n, INF));
    for(int i = 0; i < n; i++) dist[i][i] = 0;

    for(int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = w;
    }

    for(int k = 0; k < n; k++)
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                if(dist[i][k] < INF && dist[k][j] < INF)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cout << (dist[i][j] == INF ? -1 : dist[i][j]) << " ";
        cout << "\n";
    }
}



//Floyd Warshall All Matrix
#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> dist(n, vector<int>(n, INF));

    for (int i = 0; i < n; i++) dist[i][i] = 0;

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = w;
    }

    cout << "D(0) Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF) cout << -1 << " ";
            else cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    for (int k = 0; k < n; k++) {
        vector<vector<int>> newDist = dist;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] < INF && dist[k][j] < INF) {
                    newDist[i][j] = min(newDist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
        dist = newDist;

        cout << "D(" << k + 1 << ") Matrix:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][j] == INF) cout << -1 << " ";
                else cout << dist[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}



// Negative Cycle detection
#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> dist(n, vector<int>(n, INF));

    for (int i = 0; i < n; i++) dist[i][i] = 0;

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        dist[u][v] = w;
    }


    cout << "D(0) Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF) cout << -1 << " ";
            else cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";


    for (int k = 0; k < n; k++) {
        vector<vector<int>> temp = dist;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][k] < INF && dist[k][j] < INF) {
                    temp[i][j] = min(temp[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }

        dist = temp;


        cout << "D(" << k + 1 << ") Matrix:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (dist[i][j] == INF) cout << -1 << " ";
                else cout << dist[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }


    bool negCycle = false;
    for (int i = 0; i < n; i++) {
        if (dist[i][i] < 0) {
            negCycle = true;
            break;
        }
    }

    if (negCycle) cout << "Negative cycle detected\n";
    else cout << "No negative cycle\n";

    return 0;
}
//Floyd Watshall Path count
#include<bits/stdc++.h>
using namespace std;

#define N 100

int n, m;
int pathCount[N][N];

void floydPathCount() {
    for (int k = 1; k <= n; ++k)
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                pathCount[i][j] += pathCount[i][k] * pathCount[k][j];
}

int main() {
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;


    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            pathCount[i][j] = 0;

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        pathCount[u][v] = 1;
    }

    floydPathCount();

    cout << "\nNumber of paths between all pairs:\n";
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (i != j && pathCount[i][j] > 0)
                cout << "From " << i << " to " << j << " = " << pathCount[i][j] << " path(s)\n";

    return 0;
}
//shortest path from Source to destination

#include <bits/stdc++.h>
using namespace std;

#define N 100
const int INF = 1e9;

int n, m;
int dist[N][N];
int via[N][N];

void floydWarshall() {
    for (int k = 1; k <= n; ++k)
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                    via[i][j] = k;
                }
}

// Recursively build the path from u to v
void buildPath(int u, int v, vector<int>& path) {
    if (via[u][v] == -1) {
        path.push_back(u);
        if (u != v)
            path.push_back(v);
    } else {
        int k = via[u][v];
        buildPath(u, k, path);
        path.pop_back(); // avoid duplicate
        buildPath(k, v, path);
    }
}

int main() {
    cin >> n >> m;

    // Initialize distance and via matrices
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j) {
            dist[i][j] = (i == j ? 0 : INF);
            via[i][j] = -1;
        }

    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        dist[u][v] = 1;
    }

    floydWarshall();

    int src, dst;
    cin >> src >> dst;

    if (dist[src][dst] == INF) {
        cout << "No path from " << src << " to " << dst << '\n';
    } else {
        cout << "Shortest path from " << src << " to " << dst << ": ";
        vector<int> path;
        buildPath(src, dst, path);
        for (int x : path) cout << x << ' ';
        cout << "\nPath length = " << dist[src][dst] << '\n';
    }

    return 0;
}

