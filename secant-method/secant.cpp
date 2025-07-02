/******************************************************************************
Date: 01/07/2025_Tuesday
Class Type: Sessional
Time: 8.00-10.00 AM
*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

double func(double X)
{
	return X*X*X - 2*X - 5;
}

int main()
{
	double X1, X2, X3, error;
	cin >> X1 >> X2 >> error;
	cout << setprecision(3) << fixed;

	do {
		double f1 = func(X1);
		double f2 = func(X2);

		if (f1 == f2) {
			cout << "Error" << endl;
			break;
		}

		X3 = X2 - ((func(X2) * (X2 - X1)) / (func(X2) - func(X1)));
		cout << "X = " << X3 << endl;

		X1 = X2;
		X2 = X3;

	} while (abs(X1 - X2) > error);

	cout << "The root is: " << X2 << endl;

	return 0;
}
