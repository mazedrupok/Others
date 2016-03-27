#include <iostream>
#include <cstdio>
using namespace std;
double ex (double x) {
    double y;
    y = 1 + x + (x*x)/2 + (x*x*x)/6 + (x*x*x*x)/24;
    return y;
}
int main ()
{
    double x;
    cout << "Enter x of e^x: ";
    cin >> x;
    cout << "Value of e^x is: " << ex(x) << endl;
}
