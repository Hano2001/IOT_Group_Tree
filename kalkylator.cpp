#include <math.h>
#include "verktyg.h"

/* Returns 0 for division by zero and NAN for an unsupported operator. */
double berakna(double a, double b, char operatortecken)
{
    switch (operatortecken)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        if (b == 0.0)
        {
            return 0.0;
        }
        return a / b;
    default:
        return NAN;
    }
}

void byt_plats(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}
