#include <stdio.h> 
#define PI 3.14


int main() {

    int radius;
    float volume;

    printf("Enter the radius of sphere:");
    scanf("%d",&radius);

    volume = (4/3.0)*PI*(radius*radius*radius);
    printf("Volume of sphere is %.2f.",volume);

    return 0;
}