#include "sensorobjekt_klass.h"

bool Sensor::harHogreVarde(const Sensor &annan) const {
    return senasteVarde > annan.senasteVarde;
}
