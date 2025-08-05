#include <bits/stdc++.h>
using namespace std;

double f(double x) { return x*x*x - 5*x + 1; }
double fd(double x) { return 3*x*x-5; }

int main() {
    double x, error;
    cin >> x >> error;
    cout<<setprecision(3)<<endl;
    if (f(x) == 0) {
        cout << "The root is " << x << endl;
        return 0;
    }
    double h = f(x) / fd(x);
    while (abs(h) > error) {
        h = f(x) / fd(x);
        x = x - h;
    }
    cout << "The value of the root is " << x << endl;
    return 0;
}
