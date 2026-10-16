#include <stdio.h>
#include "verktyg.h"

void skriv_multiplikationstabell(int tal){

     for (int i = 1; i <= 10; i++){
      printf("%d x %d = %d\n", tal, i, i * tal);
    }
}

void skriv_flera_tabeller(int tal[], int antal) {
    
     for (int i = 0; i < antal; i++) {
        skriv_multiplikationstabell(tal[i]);       
    }
}

