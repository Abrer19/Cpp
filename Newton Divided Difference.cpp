#include <bits/stdc++.h>
using namespace std;

vector<double> dividedDiffTable(vector<double>& X, vector<double>& Y) {
    int n = X.size();
    vector<vector<double>> dd(n, vector<double>(n, 0.0));
    for (int i = 0; i < n; i++) dd[i][0] = Y[i];

    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            dd[i][j] = (dd[i+1][j-1] - dd[i][j-1]) / (X[i+j] - X[i]);
        }
    }
    vector<double> coeff(n);
    for (int i = 0; i < n; i++) coeff[i] = dd[0][i];
    return coeff;
}

double newtonInterpolation(double x, vector<double>& X, vector<double>& coeff) {
    int n = coeff.size();
    double result = coeff[0];
    double term = 1.0;
    for (int i = 1; i < n; i++) {
        term *= (x - X[i-1]);
        result += coeff[i] * term;
    }
    return result;
}

int main() {

    vector<double> temp = {0, 5, 10, 15};
    vector<double> DO   = {12.9, 11.3, 10.1, 9.03};

    vector<double> coeff = dividedDiffTable(temp, DO);

    cout << "Newton Divided Difference Interpolation (3rd Degree)\n";
    cout << "Temperature\tInterpolated DO\n";

    for (int T = 40; T <= 70; T += 5) {
        double val = newtonInterpolation(T, temp, coeff);
        cout << T << "\t\t" << fixed << setprecision(4) << val << "\n";
    }


    cout << "\nCoefficients:\n";
    for (int i = 0; i < coeff.size(); i++)
        cout << "A" << i << " = " << coeff[i] << endl;


    double mse = 0.0;
    for (int i = 0; i < temp.size(); i++) {
        double pred = newtonInterpolation(temp[i], temp, coeff);
        mse += pow(DO[i] - pred, 2);
    }
    mse /= temp.size();

    cout << "\nMean Squared Error (MSE) = " << mse << endl;
    return 0;
}

