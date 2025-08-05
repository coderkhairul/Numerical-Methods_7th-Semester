#include <bits/stdc++.h>
using namespace std;

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
    double x1, x2, x3, error;
    cin >> error;
    cout << setprecision(3) << fixed;
    x1 = 0;
    x2 = 0;
    x3 = 0;
    while (true) {
        double p1 = x1, p2 = x2, p3 = x3;
        x1 = fx1(x2, x3);
        x2 = fx2(x1, x3);
        x3 = fx3(x1, x2);
        cout << x1 << " " << x2 << " " << x3 << endl;
        if (abs(x1 - p1) <= error && abs(x2 - p2) <= error && abs(x3 - p3) <= error)
            break;
    }
    cout << "The value of x1, x2, x3 is " << x1 << " " << x2 << " " << x3 << endl;
    return 0;
}
