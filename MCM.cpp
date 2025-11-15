#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    int p[] = {5, 4, 6, 2, 7};  //(A1=5x4, A2=4x6, A3=6x2, A4=2x7)

    int m[10][10] = {0};
    int s[10][10] = {0};

    for (int d = 1; d < n - 1; d++) {
        for (int i = 1; i < n - d; i++) {
            int j = i + d;
            int minVal = INT_MAX;

            for (int k = i; k <= j - 1; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < minVal) {
                    minVal = q;
                    s[i][j] = k;
                }
            }
            m[i][j] = minVal;
        }
    }

    cout << "Minimum number of multiplications: " << m[1][n - 1] << endl;


    cout << "\nDP Table m[i][j]:" << endl;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (i > j) cout << "  -  ";
            else cout << setw(4) << m[i][j] << " ";
        }
        cout << endl;
    }


    cout << "\nSplit table s[i][j]:" << endl;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (i >= j) cout << "  -  ";
            else cout << setw(4) << s[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

