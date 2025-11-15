#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    // Example function: change as needed
    return x * x * x - 6 * x * x + 11 * x - 6;  // Roots at x = 1, 2, 3
}

void findAllRoots(double a, double b, double ds, double eps) {
    double x1 = a, x2 = x1 + ds;

    while (x2 <= b) {
        if (f(x1) * f(x2) < 0) {
            double prev_root = x1;
            double error = 1e9;
            double x0;

            while (error >= eps) {
                x0 = (x1 + x2) / 2;
                error = fabs(x0 - prev_root);

                if (f(x0) == 0) break;
                else if (f(x0) * f(x1) < 0) x2 = x0;
                else x1 = x0;

                prev_root = x0;
            }

            cout << "Root found: " << x0 << endl;
        }

        x1 = x2;
        x2 = x1 + ds;
    }
}

int main() {
    // Hardcoded input values
    double a = 0;        // Left endpoint of interval
    double b = 4;        // Right endpoint of interval
    double ds = 0.1;     // Step size
    double eps = 0.0001; // Tolerance

    findAllRoots(a, b, ds, eps);
    return 0;
}
