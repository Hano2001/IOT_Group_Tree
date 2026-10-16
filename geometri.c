//
// Created by ahmed on 2026-10-07.
//
#include "verktyg.h"

double rektangelarea(double bredd, double hojd)
{
    return bredd * hojd;
}
void storst_rektangel(double bredder[], double hojder[], int antal,
                      double *storsta_area_ut, int *index_ut) {
    *storsta_area_ut = 0.0;
    *index_ut = -1;
    for (int i = 0; i < antal; i++) {
        double area = rektangelarea(bredder[i], hojder[i]);
        if (*index_ut == -1 || area > *storsta_area_ut) {
            *storsta_area_ut = area;
            *index_ut = i;
        }
    }
}