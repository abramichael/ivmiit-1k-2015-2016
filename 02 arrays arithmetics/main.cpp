#include <iostream>

using namespace std;

int main()
{

    int n = 10;
    int a[n];
    a[0] = 31;
    a[1] = 25;

    // адрес массива в ОП
    cout << a << endl;
    // значение по адресу a - a[0]
    cout << *a << endl;
    // значение по адресу a + 1 int элемент - a[1]
    cout << *(a + 1) << endl;

    // адрес элемента a[0]
    cout << &a[0] << endl;
    // адрес элемента a[1]
    cout << &a[1] << endl;

    return 0;
}
