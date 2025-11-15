#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> x(n), y(n);
    for(int i=0;i<n;i++) cin >> x[i] >> y[i];

    double sumLogX = 0, sumLogY = 0, sumLogX2 = 0, sumLogXY = 0;

    for(int i=0;i<n;i++){
        double lx = log(x[i]);
        double ly = log(y[i]);
        sumLogX += lx;
        sumLogY += ly;
        sumLogX2 += lx*lx;
        sumLogXY += lx*ly;
    }

    double b = (n*sumLogXY - sumLogX*sumLogY) / (n*sumLogX2 - sumLogX*sumLogX);
    double A = (sumLogY - b*sumLogX) / n;
    double a = exp(A);

    cout << "Power Regression: y = " << a << " * x^" << b << endl;
    return 0;
}
