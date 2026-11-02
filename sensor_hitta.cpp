//
// Created by ahmed on 2026-10-26.
//
#include <string.h>
#include "verktyg.h"

int hitta_sensor(Sensormatning *reg, int antal, const char *namn) {
    for (int i = 0; i < antal; i++) {
        if (strcmp(reg[i].namn, namn) == 0) {
            return i;
        }
    }
    return -1;
}