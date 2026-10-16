#include <math.h>
#include "verktyg.h"

/* Returns NAN for division by zero or an unsupported operator. */
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
            return NAN;
        }
        return a / b;
    default:
        return NAN;
    }
}
