#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> x(n);
    vector<vector<double>> y(n, vector<double>(n, 0));

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i][0];   // Xi and Yi
    }

    double Xp;
    cin >> Xp;

    // Build divided difference table
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            y[i][j] = (y[i+1][j-1] - y[i][j-1]) / (x[i+j] - x[i]);
        }
    }

    // Newton interpolation
    double ans = y[0][0];
    double term = 1.0;
    for (int i = 1; i < n; i++) {
        term *= (Xp - x[i-1]);
        ans += term * y[0][i];
    }

    cout << "Interpolated value: " << ans << endl;
    return 0;
}
