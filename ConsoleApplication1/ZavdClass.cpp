#include <cmath>
#include "ZavdClass.h"

// Обчислення функції b[x,y,z]
void ZavdClass::Fn_b(double x, double y, double z)
{
    double b1 = x * x + tan(pow(y + z, 2));
    double b2 = 0.2 * y + pow(sin(x * y * z), 2);
    double b3 = exp(-(x + y) / z);
    b = y * (b1 + b2 + b3);
}

// Обчислення функції a[x,y,z,b]
void ZavdClass::Fn_a(double x, double y, double z)
{
    double a1 = pow(x * y, 2);
    double a2 = (x + y) * pow(b * b + z, 0.3);
    double a3 = x / Faktr(2) + exp(z - 2) + y * w * y / Faktr(3);
    a = a1 + a2 / a3;
}

// Обчислення факторіалу
double ZavdClass::Faktr(int n)
{
    double f = 1;
    if (n > 1)
    {
        for (int i = 2; i <= n; i++)
            f *= i;
    }
    return f;
}
