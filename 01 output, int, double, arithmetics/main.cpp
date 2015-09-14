#include <iostream>

using namespace std;

int main()
{
    int x;
    x = 17;
    int y = 126;

    int z = x + y;
    cout << z << endl;

    //division
    int p = y / x;
    int q = y % x; //mod in pascal
    cout << p << endl;

    cout << y << " = " << p << " * " << x << " + " << q << endl;

    double x2 = 1.0 / 5 + 2.0 / 7;
    int a = 5;
    int b = 7;
    double y2 = (double)a / b + (double)b / a;
    cout << x2 << " " << y2 << endl;

    //p = p + q;
    p += q;

    int c = 10

    a = c++; //a = 10, c = 11
    a = ++c; //a = 12, c = 12

    return 0;
}
