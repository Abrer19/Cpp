#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    long long k;
    cin >> n >> k;
    string s;
    cin >> s;

    vector<int> pos(n);
    for (int i = 0; i < n; i++) pos[i] = i;

    map<vector<int>, long long> vis;
    vector<vector<int>> states;
    states.push_back(pos);
    vis[pos] = 0;

    long long step = 0;
    vector<int> newPos(n);
    while (true) {
        step++;
        int mid = n / 2;
        if (step % 2 == 1) {
            for (int i = 0; i < mid; i++) newPos[i] = pos[i];
            for (int i = 0; i < mid; i++) newPos[mid + i] = pos[mid + i];
            for (int i = 0; i < mid; i++) swap(newPos[i], newPos[n - 1 - i]);
        } else {
            for (int i = 0; i < mid; i++) swap(pos[i], pos[mid + i]);
            newPos = pos;
            reverse(newPos.begin(), newPos.end());
        }
        pos = newPos;
        if (vis.count(pos)) break;
        vis[pos] = step;
        states.push_back(pos);
    }

    long long cycle_start = vis[pos];
    long long cycle_len = step - cycle_start;
    long long rem = k;
    if (k >= cycle_start) rem = cycle_start + (k - cycle_start) % cycle_len;

    string res(n, ' ');
    for (int i = 0; i < n; i++) res[i] = s[states[rem][i]];

    cout << res << "\n";
    return 0;
}
