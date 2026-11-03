#include <iostream>
#include <stdio.h>
#include "verktyg.h"

void skriv_multiplikationstabell(int tal){

     for (int i = 1; i <= 10; i++){

        std::cout << tal << " x " << i << " = " << i * tal << std::endl;
    }
}

void skriv_flera_tabeller(int tal[], int antal) {
    
     for (int i = 0; i < antal; i++) {
        
        skriv_multiplikationstabell(tal[i]);       
    }
}

