#include<bits/stdc++.h>
using namespace std;

double lagrangeInterpolation(double value, vector<double>& x, vector<double>& y, int n) {
    double result = 0.0;
    for(int i=0; i<n; i++) {
        double term = y[i];
        for(int j=0; j<n; j++) {
            if(i != j) {
                term *= (value - x[j]) / (x[i] - x[j]);
            }
        }
        result += term;
    }
    return result;
}

int main() {
    vector<double> x = {1, 1.5, 2, 3, 4};
    vector<double> y = {1.0, 1.2247, 1.4142, 1.7321, 2.0};
    int n = x.size();

    for(double val=2.5; val<=3.5; val+=0.5) {
        double interp = lagrangeInterpolation(val, x, y, n);
        double trueval = sqrt(val);
        double abserror = fabs(trueval - interp);
        cout << val << " " << interp << " " << trueval << " " << abserror << endl;
    }
}
