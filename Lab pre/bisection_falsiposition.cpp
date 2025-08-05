// Bisection Method in C++
// Author: Md. Khairul Islam

#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return x * x * x - x - 1;
}

bool isValidInterval(double a, double b) {
    if (f(a) * f(b) > 0) {
        cout << "\n[!] Invalid interval: f(a) and f(b) must have opposite signs.\n";
        return false;
    }
    return true;
}

int main() {
    int itn;
    double a, b, c, error;

    cout << "[*] BISECTION METHOD ROOT FINDER [*]" << endl;
    cout << "--------------------------------------" << endl;

    cout << "[>] Enter maximum number of iterations: ";
    cin >> itn;

    cout << "[>] Enter initial interval (a b): ";
    cin >> a >> b;

    cout << "[>] Enter error tolerance (e.g., 0.0001): ";
    cin >> error;

    if (!isValidInterval(a, b)) return 0;

    cout << "\n[+] Starting Bisection Method...\n";
    cout << "--------------------------------------" << endl;

    cout << fixed << setprecision(3);

    for (int i = 1; i <= itn; i++) {
        //c = (a + b) / 2;
        // Regular Falsi formula
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        cout << "[#] Iteration " << i << ": c = " << c << ", f(c) = " << f(c) << endl;

        if (fabs(f(c)) < error || (b - a) / 2 < error) {
            cout << "\n[OK] Desired accuracy reached at iteration " << i << "." << endl;
            break;
        }

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }

    //c = (a + b) / 2;
    // Regular Falsi formula
    c = (a * f(b) - b * f(a)) / (f(b) - f(a));
    cout << "\n[=] Final Result:" << endl;
    cout << "[*] Approximate Root = " << c << endl;
    cout << "[*] f(root) = " << f(c) << endl;
    cout << "[*] Tolerance used: " << error << endl;

    cout << "\n[*] Thank you for using the Bisection Method Solver!" << endl;

    return 0;
}
