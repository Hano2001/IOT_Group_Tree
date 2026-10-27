#include <stddef.h>
#include "verktyg.h"

void berakna_loggstatistik(double *logg, int antal, double *min_ut, double *max_ut, double *medel_ut)
{
    if (logg == NULL) {
        *min_ut = 0.0;
        *max_ut = 0.0;
        *medel_ut = 0.0;
        return;
    }

    double min = logg[0];
    double max = logg[0];
    double summa = 0.0;

    for (int i = 0; i < antal; i++) {
        if (logg[i] < min)
            min = logg[i];

        if (logg[i] > max)
            max = logg[i];

        summa += logg[i];
    }

    *min_ut = min;
    *max_ut = max;
    *medel_ut = summa / antal;
}
