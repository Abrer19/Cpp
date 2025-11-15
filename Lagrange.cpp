#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<double> x(n), y(n);
    for(int i=0;i<n;i++) cin >> x[i] >> y[i];

    double Xp;
    cin >> Xp;

    double result = 0.0;

    for(int i=0;i<n;i++){
        double term = y[i];
        for(int j=0;j<n;j++){
            if(i!=j){
                term *= (Xp - x[j]) / (x[i] - x[j]);
            }
        }
        result += term;
    }

    cout << "Interpolated value: " << result << endl;
    return 0;
}
