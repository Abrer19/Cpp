#include <bits/stdc++.h>
using namespace std;

vector<double> weights, values;

bool cmp(int a, int b) {
    return (values[a] / weights[a]) > (values[b] / weights[b]);
}

int main() {
    int n;
    double W;
    cin >> W >> n;

    weights.resize(n);
    values.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> weights[i] >> values[i];
    }

    vector<int> idx(n);
    for (int i = 0; i < n; i++) idx[i] = i;

    sort(idx.begin(), idx.end(), cmp);

    double totalValue = 0.0, remaining = W;
    vector<double> taken(n, 0.0);

    for (int j = 0; j < n; j++) {
        int i = idx[j];
        if (remaining <= 0) break;

        if (weights[i] <= remaining) {
            taken[i] = 1.0;
            totalValue += values[i];
            remaining -= weights[i];
        } else {
            taken[i] = remaining / weights[i];
            totalValue += values[i] * taken[i];
            remaining = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << (i + 1) << "\t" << weights[i] << "\t" << values[i]
             << "\t" << taken[i] << "\n";
    }

    cout << totalValue << "\n";
}
