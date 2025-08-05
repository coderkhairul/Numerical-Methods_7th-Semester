#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return 2*x*x*x - 2*x - 5;
}
int validity(double a, double b)
{
    if(f(a) * f(b) > 0)
    {
        cout << "The value of a and b is invalid" << endl;
        return 0;
    }
    return 1;
}
int main()
{
    double a, b, c, error;
    cin >> a >> b;
    cin >> error;
    int valid = validity(a, b);
    if(valid == 0)
        return 0;

    do {
        c=(a+b)/2;
        //c = (a*f(b) - b*f(a)) / (f(b) - f(a)); // False Position formula
        if(f(c) == 0)
            break;
        else if(f(a) * f(c) < 0)
            b = c;
        else
            a = c;
        cout << c << endl;
    } while (fabs(f(c)) > error);

    cout << "The root is " << c << endl;
    return 0;
}
