#include <stdio.h>
int main () {

    int vize1,vize2,final;
    float dersort; 
    float ortalama;

    printf("Enter the first visa points:");
    scanf("%d",&vize1);
    printf("Enter the second visa points:");
    scanf("%d",&vize2);
    printf("Enter the Final points:");
    scanf("%d",&final); 
    printf("Universite Ortalamanizi Giriniz:");
    scanf("%d",&ortalama);

    dersort = (vize1+vize2+final)/3.0;

    if (dersort > 60) {
        printf("You passed the Lesson.");
    }
    else if (dersort > 50) {
        printf("Dersten Bute Kaldiniz.\n");
        if (ortalama < 2.5) {
            printf("Butu gecersen dersi tekrar al, cunku ortalaman dusuk");
        }
    }
     else {
         printf("You failed the Lesson");
     }
    return 0;
}