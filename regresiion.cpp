#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<double> x = {140, 155, 212, 179, 192, 200};
    vector<double> y = {60, 62, 75, 70, 71, 72};

    int n = x.size();
    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

    for (int i = 0; i < n; i++) {
        sumX += x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
        sumX2 += x[i] * x[i];
    }

    cout << "Sum(X) = " << sumX << endl;
    cout << "Sum(Y) = " << sumY << endl;
    cout << "Sum(XY) = " << sumXY << endl;
    cout << "Sum(X^2) = " << sumX2 << endl;

    double slope = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    double intercept = (sumY - slope * sumX) / n;

    cout << "\nLinear Regression Equation: Height = "
         << slope << " * Weight + " << intercept << endl;

    double w = 159;
    double prediction = slope * w + intercept;
    cout << "Predicted height for weight " << w << " lbs: "
         << prediction << " inches" << endl;

    double mse = 0;
    for (int i = 0; i < n; i++) {
        double y_pred = slope * x[i] + intercept;
        mse += pow(y[i] - y_pred, 2);
    }
    mse /= n;
    cout << "Mean Squared Error (MSE): " << mse << endl;

    return 0;
}

