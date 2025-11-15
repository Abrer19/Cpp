#include<bits/stdc++.h>
using namespace std;

void dividedDifference(vector<double>& x, vector<double>& y, vector<vector<double>>& table, int n) {
    for(int i=0; i<n; i++) table[i][0] = y[i];
    for(int j=1; j<n; j++) {
        for(int i=0; i<n-j; i++) {
            table[i][j] = (table[i+1][j-1] - table[i][j-1]) / (x[i+j] - x[i]);
        }
    }
}

double newtonInterpolation(double value, vector<double>& x, vector<vector<double>>& table, int n) {
    double result = table[0][0];
    double term = 1.0;
    for(int i=1; i<n; i++) {
        term *= (value - x[i-1]);
        result += term * table[0][i];
    }
    return result;
}

int main() {
    vector<double> x = {1, 1.5, 2, 3, 4};
    vector<double> y = {1.0, 1.2247, 1.4142, 1.7321, 2.0};
    int n = x.size();
    vector<vector<double>> table(n, vector<double>(n, 0));

    dividedDifference(x, y, table, n);

    for(int i=0; i<n; i++) {
        cout << "Order " << i << ": ";
        for(int j=0; j<n-i; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    for(double val=2.5; val<=3.5; val+=0.5) {
        double interp = newtonInterpolation(val, x, table, n);
        double trueval = sqrt(val);
        double abserror = fabs(trueval - interp);
        cout << val << " " << interp << " " << trueval << " " << abserror << endl;
    }
}
