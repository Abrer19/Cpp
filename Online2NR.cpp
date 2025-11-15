#include <bits/stdc++.h>
using namespace std;

vector<float> coeffs;
float f(float x) {
    float result = coeffs[0];
    for (int i = 1; i < coeffs.size(); i++) {
        result = result * x + coeffs[i];
    }
    return result;
}

float df(float x) {
    int n = coeffs.size() - 1;
    float result = coeffs[0] * n;
    for (int i = 1; i < n; i++) {
        result = result * x + coeffs[i] * (n - i);
    }
    return result;
}

int main() {
    int degree;
    cout << "ENTER THE TOTAL NO. OF POWER:::: ";
    cin >> degree;

    coeffs.resize(degree + 1);
    for (int i = 0; i <= degree; i++) {
        cout << "x^" << i << "::: ";
        cin >> coeffs[i];
    }

    cout << "THE POLYNOMIAL IS ::: ";
    for (int i = 0; i <= degree; i++) {
        cout << coeffs[i] << "x^" << (degree - i);
        if (i != degree) cout << " + ";
    }
    cout << endl;

    float x0 = 1.0, x1 = 0.0;
    float tolerance = 0.0001;
    float error = 1.0;
    int iteration = 1;

    cout << "INITIAL: X0----->" << x0 << endl;
    cout << "Itr\t x1\t\t x2\t\t Relative Error\n";

    while (error > tolerance) {
        float fx = f(x0);
        float dfx = df(x0);

        x1 = x0 - fx / dfx;
        error = fabs(x1 - x0);

        cout << iteration << "\t " << x0 << "\t " << x1 << "\t " << error << endl;

        x0 = x1;
        iteration++;
    }

    cout << "Final Approximate Root: " << x1 << endl;

    return 0;
}
