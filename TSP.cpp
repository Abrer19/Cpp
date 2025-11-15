#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e15;
int N;
long long bestCost = INF;
vector<int> bestPath;

// Reduce the matrix (row + col reductions)
long long reduceMatrix(vector<vector<long long>> &m) {
    long long reduction = 0;

    // Row reduction
    for (int i = 0; i < N; i++) {
        long long mn = INF;
        for (int j = 0; j < N; j++) mn = min(mn, m[i][j]);
        if (mn < INF && mn > 0) {
            for (int j = 0; j < N; j++)
                if (m[i][j] < INF) m[i][j] -= mn;
                      reduction += mn;
        }
    }

    // Column reduction
    for (int j = 0; j < N; j++) {
        long long mn = INF;
        for (int i = 0; i < N; i++) mn = min(mn, m[i][j]);
        if (mn < INF && mn > 0) {
            for (int i = 0; i < N; i++)
                if (m[i][j] < INF) m[i][j] -= mn;
            reduction += mn;
        }
    }
    return reduction;
}

// Recursive branch and bound
void solve(vector<vector<long long>> mat, vector<int> path, long long cost, int level) {
    if (cost >= bestCost) return; // prune

    if (level == N - 1) {
        // close tour
        long long lastEdge = mat[path.back()][0];
        if (lastEdge >= INF) return;
        long long total = cost + lastEdge;
        if (total < bestCost) {
            bestCost = total;
            bestPath = path;
            bestPath.push_back(0);
        }
        return;
    }

    int u = path.back();

    for (int v = 0; v < N; v++) {
        if (mat[u][v] >= INF) continue;

        vector<vector<long long>> child = mat;

        // Invalidate row u and column v
        for (int j = 0; j < N; j++) child[u][j] = INF;
        for (int i = 0; i < N; i++) child[i][v] = INF;

        // Avoid immediate cycle
        child[v][u] = INF;

        long long edgeCost = mat[u][v];
        long long reduction = reduceMatrix(child);

        vector<int> newPath = path;
        newPath.push_back(v);

        solve(child, newPath, cost + edgeCost + reduction, level + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;
    vector<vector<long long>> cost(N, vector<long long>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            long long x;
            cin >> x;
            if (i == j || x >= 1e14) cost[i][j] = INF;
            else cost[i][j] = x;
        }
    }

    // Root reduction
    long long reduction = reduceMatrix(cost);
    vector<int> startPath = {0};

    solve(cost, startPath, reduction, 0);

    if (bestCost >= INF) {
        cout << "No Hamiltonian tour exists\n";
    } else {
        cout << "Minimum tour cost: " << bestCost << "\n";
        cout << "Tour: ";
        for (int i = 0; i < (int)bestPath.size(); i++) {
            if (i) cout << " -> ";
            cout << bestPath[i];
        }
        cout << "\n";
    }
    return 0;
}
