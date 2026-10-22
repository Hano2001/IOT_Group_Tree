#include <stdlib.h>
#include "verktyg.h"

double *kopiera_matlogg(double *logg, int antal) {

if (antal == 0) {return NULL;}
double *kopia = malloc(antal * sizeof(double));
for (int i = 0; i < antal; i++ ) {
    kopia[i] = logg[i];    
}
return kopia;
}
