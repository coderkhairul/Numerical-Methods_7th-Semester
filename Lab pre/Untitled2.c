#include<bits/stdc++.h>
using namespace std;

double f1(double x2, double x3)
{
    return (12.6-2*x2-2*x3)/26;
}
double f2(double x1, double x3)
{
    return (-14.3-3*x1-2*x1-x3)/27;
}
double f3(double x1, double x2)
{
    return (6.0-2*x1-3*x2)/17;
}
int main()
{

    double x1,x2,x3,x4,x5,x6,error;
    cin>>error;
    cout<<setprecision(3)<<fixed<<endl;
    x1 = 0;
    x2 = 0;
    x3 = 0;
    while(true)
    {

        x1 = f1(x2,x3);
        x2 = f2(x1,x3);
        x3 = f3(x1,x2);
        cout<<x1<<" "<<x2<<" " <<x3 <<" "<<endl;
        if(abs(x1-x1)<=error && abs(x2-x2)<=error && abs(x3-x3)<=error)
            break;
    }
    cout <<"The value of x1, x2 and x3 is: " <<x1<<" "<<x2<<" "<<x3<<" "<<endl;

    return 0;
}

