#include <bits/stdc++.h>
using namespace std;

vector<float> coeffs;

// Horner’s Rule to evaluate polynomial at x
float f(float x) {
    float result = coeffs[0];
    for (int i = 1; i < coeffs.size(); i++) {
        result = result * x + coeffs[i];
    }
    return result;
}

int main() {
    int degree;
    cout << "Enter degree of polynomial: ";
    cin >> degree;

    coeffs.resize(degree + 1);
    cout << "Enter " << degree + 1 << " coefficients (highest degree first): ";
    for (int i = 0; i <= degree; i++) {
        cin >> coeffs[i];
    }

    float x0 = 0;
    float x1 = 2;
    float x2;
    float tolerance = 0.0001;
    float error = 1;
    float prev_x = x1;

    while (error > tolerance) {
        float fx0 = f(x0);
        float fx1 = f(x1);
        x2 = x1 - ((x1 - x0) * fx0) / (fx1 - fx0);
        error = fabs(x2 - prev_x);
        prev_x = x2;

        x0 = x1;
        x1 = x2;
    }

    cout << "Final Root: " << x1 << endl;

    return 0;
}
