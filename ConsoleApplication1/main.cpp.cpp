#include <iostream>
#include <windows.h>
#include "ZavdClass.h"
using namespace std;

int main()
{
    // ����������� ���������
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    ZavdClass obj;

    double x, y, z;
    cout << "������ x, y, z: ";
    cin >> x >> y >> z;

    obj.w = 2.5; // ������� ��������

    obj.Fn_b(x, y, z);
    obj.Fn_a(x, y, z);

    cout << "b(x,y,z) = " << obj.b << endl;
    cout << "a(x,y,z,b) = " << obj.a << endl;
    cout << "��������(5) = " << obj.Faktr(5) << endl;

    return 0;
}
