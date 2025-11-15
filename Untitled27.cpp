#include <bits/stdc++.h>
using namespace std;

// Initial polynomial coefficients (highest degree to constant)
vector<double> v = {1, -15, 85, -225, 274, -120}; // x^5 - 15x^4 + ...

// Evaluate f(x) using Horner's method
double func1(double x, vector<double>& c) {
    double ans = 0;
    for (int i = 0; i < c.size(); i++)
        ans = ans * x + c[i];
    return ans;
}

// Evaluate f'(x) using Horner's method
double func2(double x,  vector<double>& c) {
    double ans = 0;
    int n = c.size() - 1;
    for (int i = 0; i < n; i++)
        ans = ans * x + (n - i) * c[i];
    return ans;
}

// Synthetic division: divide polynomial by (x - root)
void s_div(vector<double>& c, double root) {
    int n = c.size();
    vector<double> b(n);
    b[0] = c[0];
    for (int i = 1; i < n; i++)
        b[i] = c[i] + b[i - 1] * root;

    c.resize(n - 1);
    for (int i = 0; i < n - 1; i++)
        c[i] = b[i];
}

int main() {
    int n = 5; // degree
    double tol = 0.00001;
    int as = 1;

    while (n > 1) {
        double x0 = 0; // you can change this guess
        double error = 100;
        int iter = 0;

        cout << "Converging for Root " << as++ << ":\n";
        cout << "Iter\t  x0\t\t  x1\t\t  error\n";

        while (error >= tol && iter < 1000) {
            iter++;
            double f1 = func1(x0, v);
            double f2 = func2(x0, v);

            if (f2 == 0) {
                cout << "Derivative is zero. Stopping.\n";
                return 0;
            }

            double x1 = x0 - f1 / f2;
            error = abs(x1 - x0);

            cout << fixed << setprecision(6) << iter << "\t" << x0 << "\t" << x1 << "\t" << error << "\n";
            x0 = x1;
        }

        cout << "\nRoot Found: " << fixed << setprecision(6) << x0 << "\n\n";

        s_div(v, x0); // reduce polynomial
        n = v.size() - 1;
    }

    // Final root (linear equation ax + b = 0 => x = -b/a)
    double l_root = -v[1] / v[0];
    cout << "Final Root: " << fixed << setprecision(6) << l_root << "\n";

    return 0;
}
