#include <stdio.h>
#include <stdlib.h>
#include "verktyg.h"

double *ta_bort_senaste_matning(double *logg, int *antal)
{
    if(antal == NULL)
    {
        return logg;
    }

    if(logg == NULL || antal <= 0)
    {
        printf("matloggen ar tom och oforandrad");
        return logg;
    }
    (*antal)--;

    if(antal == 0)
    {
        free(logg);
        return NULL;
    }
}