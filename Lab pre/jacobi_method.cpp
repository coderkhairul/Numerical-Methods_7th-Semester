#include <bits/stdc++.h>
using namespace std;

// Function definitions
double fx1(double x2, double x3) {
    return (12.6 - 2 * x2 - 2 * x3) / 26;
}

double fx2(double x1, double x3) {
    return (-14.3 - 3 * x1 - x3) / 27;
}

double fx3(double x1, double x2) {
    return (6 - 2 * x1 - 3 * x2) / 17;
}

int main() {
    double x1, x2, x3, x4, x5, x6, error;

    // Take input for the desired error threshold
    cin >> error;

    cout << setprecision(3) << fixed;

    // Initial guesses
    x1 = 0;
    x2 = 0;
    x3 = 0;

    // First iteration values
    x4 = fx1(x2, x3);
    x5 = fx2(x1, x3);
    x6 = fx3(x1, x2);

    // Iterate until all updated values are within the error threshold
    while (abs(x4 - x1) > error || abs(x5 - x2) > error || abs(x6 - x3) > error) {
        cout << x4 << " " << x5 << " " << x6 << endl;

        x1 = x4;
        x2 = x5;
        x3 = x6;

        x4 = fx1(x2, x3);
        x5 = fx2(x1, x3);
        x6 = fx3(x1, x2);
    }

    // Final result
    cout << "The value of x1, x2, x3 is " << x1 << " " << x2 << " " << x3 << endl;

    return 0;
}
