#include <stdio.h>

#include "verktyg.h"

void spara_sensorregister(const char *filnamn, Sensormatning *reg, int antal)

{

    FILE *fil = fopen(filnamn, "w");

    if (fil == NULL)
    {
        printf("SOMETHING WENT WRONG \n");
    }

    else
    {
        printf("Trying to write to file..\n");
        for (int i = 0; i < antal; i++)
        {

            fprintf(fil, "%s %.2f\n", reg[i].namn, reg[i].varde);
        }
        fclose(fil);
    }
}