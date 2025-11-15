#include<bits/stdc++.h>
using namespace std;

float f(float h) {
    return ((2 * h - 7) * h + 4) * h + 1;
}

int main() {
    float h0 = 1.5, h1 = 2.5, h2;
    float error = 1.0;
    float tolerance = 0.000001;
    int iteration = 1;

    cout << "***********************************************************************************\n";
    cout << "Iteration||    h0||    h1||   f(h1)||     h2||   f(h2)||  Relative Error\n";
    cout << "***********************************************************************************\n";

    while (error > tolerance) {
        float f0 = f(h0);
        float f1 = f(h1);

        h2 = h1 - (f1 * (h1 - h0)) / (f1 - f0);
        float f2 = f(h2);
        error = fabs((h2 - h1) / h2);

        cout << iteration << "|| ";
        cout << h0 << "|| ";
        cout << h1 << "|| ";
        cout << f1 << "|| ";
        cout << h2 << "|| ";
        cout << f2 << "|| ";

        if (iteration == 1)
            cout << "N/A";
        else
            cout << error;

        cout << endl;

        h0 = h1;
        h1 = h2;
        iteration++;
    }

    cout << "***********************************************************************************\n";
    cout << "Final depth (approx): " << h2 << " meters\n";

    return 0;
}
