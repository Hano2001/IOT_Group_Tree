#include "verktyg.h"
#include <stddef.h>

double medelvarde_sensorregister(Sensormatning *sensorregister, int antal) {
    if (sensorregister == NULL || antal <= 0) {
        return 0;
    }

    double summa = 0;

    for (int i = 0; i < antal; i++) {
        summa += sensorregister[i].varde;
    }

    return summa / antal;
}