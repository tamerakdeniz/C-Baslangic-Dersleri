#include <stdio.h>
#include <math.h>
int main() {

    int a,b,c;
    float x1,x2;
    float delta;

    printf("Enter the equation's a:");
    scanf("%d",&a);
    printf("Enter the equation's b:");
    scanf("%d",&b);
    printf("Enter the equation's c:");
    scanf("%d",&c);

    delta = b*b-4*a*c;
    x1 = (-b + (sqrt(delta)))/2*a;
    x2 = (-b - (sqrt(delta)))/2*a;
    printf("The first radic of the equation is %.2f,The second radix of the equation is %.2f",x1,x2);

    return 0;
}