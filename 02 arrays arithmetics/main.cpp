#include <iostream>

using namespace std;

int main()
{

    int n = 10;
    int a[n];
    a[0] = 31;
    a[1] = 25;

    // ����� ������� � ��
    cout << a << endl;
    // �������� �� ������ a - a[0]
    cout << *a << endl;
    // �������� �� ������ a + 1 int ������� - a[1]
    cout << *(a + 1) << endl;

    // ����� �������� a[0]
    cout << &a[0] << endl;
    // ����� �������� a[1]
    cout << &a[1] << endl;

    return 0;
}
