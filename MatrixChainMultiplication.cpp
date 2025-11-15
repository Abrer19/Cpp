#include <bits/stdc++.h>
using namespace std;

int matrixChainMultiplication(vector<int>& p, int n) {

    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int L = 2; L < n; L++) {
        for (int i = 1; i < n - L + 1; i++) {
            int j = i + L - 1;
            dp[i][j] = INT_MAX;

            for (int k = i; k < j; k++) {
                int cost = dp[i][k] + dp[k+1][j] + p[i-1]*p[k]*p[j];
                dp[i][j] = min(dp[i][j], cost);
            }
        }
    }

    return dp[1][n-1];
}

int main() {
    // Example: matrices of dimensions 10x30, 30x5, 5x60
    vector<int> p = {10, 30, 5, 60};
    int n = p.size();

    cout << "Minimum multiplications: "
         << matrixChainMultiplication(p, n) << endl;

    return 0;
}

