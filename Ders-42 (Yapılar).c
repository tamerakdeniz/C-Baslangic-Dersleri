#include <stdio.h>
struct Araba {
   int vitessayisi;
   int model;
   float motor;
   int beygir;
}araba1,araba2;

int main() {

    struct Araba araba1 ={6,2011,3.0,300}; 
    printf("%d %d %.2f %d",araba1.vitessayisi,araba1.motor,araba1.motor,araba1.beygir);



    return 0;
}
