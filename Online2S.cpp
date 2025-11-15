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

    float x0 = 0.0, x1 = 1.0, x2 = 0.0;
    float tolerance = 0.0001;
    float error = 1.0;
    int iteration = 1;

    cout << "INITIAL: X0----->" << x0 << ", X1----->" << x1 << endl;
    cout << "Itr\t x0\t\t x1\t\t x2\t\t Relative Error\n";

    while (error > tolerance) {
        float fx0 = f(x0);
        float fx1 = f(x1);

        x2 = x1 - fx1 * (x1 - x0) / (fx1 - fx0);
        error = fabs(x2 - x1);

        cout << iteration << "\t " << x0 << "\t " << x1 << "\t " << x2 << "\t " << error << endl;

        x0 = x1;
        x1 = x2;
        iteration++;
    }

    cout << "Final Approximate Root: " << x2 << endl;

    return 0;
}
