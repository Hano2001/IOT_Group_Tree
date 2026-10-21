#include <stddef.h>
#include "verktyg.h"

void berakna_loggstatistik(double *logg, int antal, double *min_ut, double *max_ut, double *medel_ut)
{
    if (logg == NULL || antal <= 0 || min_ut == NULL || max_ut == NULL || medel_ut == NULL) {
        if (min_ut != NULL) *min_ut = 0.0;
        if (max_ut != NULL) *max_ut = 0.0;
        if (medel_ut != NULL) *medel_ut = 0.0;
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
