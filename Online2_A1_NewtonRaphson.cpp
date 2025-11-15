#include <bits/stdc++.h>
using namespace std;

float f(float h) {
    return ((2 * h - 7) * h + 4) * h + 1;
}

float df(float h) {
    return 6 * h * h - 14 * h + 4;
}

int main() {
    float h = 3.5;
    float prev_h, error = 1.0;
    float tolerance = 0.000001;
    int iteration = 1;

    cout << "***********************************************************************************\n";
    cout << "Iteration|| prev_h||    h||     f(h)||    f'(h)||  Relative Error\n";
    cout << "***********************************************************************************\n";

    while (error > tolerance) {
        prev_h = h;
        h = h - (f(h) / df(h));
        error = fabs((h - prev_h) / h);

        cout << iteration << "|| ";
        cout << prev_h << "|| ";
        cout << h << "|| ";
        cout << f(h) << "|| ";
        cout << df(h) << "|| ";

        if (iteration == 1)
            cout << "N/A";
        else
            cout << error;

        cout << endl;
        iteration++;
    }

    cout << "***********************************************************************************\n";
    cout << "Final depth (approx): " << h << " meters\n";

    return 0;
}

