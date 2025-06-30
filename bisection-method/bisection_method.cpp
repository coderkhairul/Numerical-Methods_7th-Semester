// Bisection Method in C++
// Author: Md. Khairul Islam
#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return 2 * x * x * x - 2 * x - 5;
}

int validity(double a, double b) {
    if (f(a) * f(b) > 0) {
        cout << "The value of a and b is invalid" << endl;
        return 0;
    }
    return 1;
}

int main() {
    double a, b, c, error;
    cout << "Enter interval (a and b): ";
    cin >> a >> b;
    cout << "Enter error tolerance: ";
    cin >> error;

    if (!validity(a, b)) return 0;

    while ((b - a) / 2 > error) {
        c = (a + b) / 2;
        if (f(c) == 0.0) break;
        else if (f(a) * f(c) < 0) b = c;
        else a = c;
    }

    c = (a + b) / 2;
    cout << "The root is: " << c << endl;
    return 0;
}