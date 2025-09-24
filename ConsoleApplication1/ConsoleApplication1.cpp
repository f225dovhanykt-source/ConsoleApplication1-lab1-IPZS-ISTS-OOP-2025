#pragma once
#include <iostream>

class ZavdClass
{
public:
    double a;   // результат функції a
    double b;   // результат функції b
    double w;   // допоміжна змінна (можеш ініціалізувати в main)

    void Fn_b(double x, double y, double z);
    void Fn_a(double x, double y, double z);
    double Faktr(int n);
};
