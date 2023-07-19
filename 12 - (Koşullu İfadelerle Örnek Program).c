#include <stdio.h>
int main() {

    int vize1,vize2,final;
    float okulort;
    float dersort;
    printf("The First Visa Points:");
    scanf("%d",&vize1);
    printf("The Second Visa Points:");
    scanf("%d",&vize2);
    printf("The Final Points:");
    scanf("%d",&final);
    printf("Universite Ortalamanizi Giriniz:");
    scanf("%f",&okulort);
    dersort = (vize1*3/10.0 + vize2*3/10.0 + final*4/10.0);

    if (dersort >= 90) {
        printf("Harf Notunuz - AA ve Ders ortalamaniz: %f",dersort);
    }
    else if (dersort >= 85 && dersort <90) {
        printf("Harf Notunuz - BA ve Ders ortalamaniz: %f",dersort);
    }
    else if (dersort >= 80 && dersort <85) {
        printf("Harf Notunuz - BB ve Ders ortalamaniz: %f",dersort);
    }
    else if (dersort >= 75 && dersort <80) {
        printf("Harf Notunuz - CB ve Ders ortalamaniz: %f",dersort);
    }
    else if (dersort >= 70 && dersort <75) {
        printf("Harf Notunuz - CC ve Ders ortalamaniz: %f\n",dersort);
        if(okulort < 2.5) {
            printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk.");
        }
    }
    else if (dersort >= 65 && dersort <70) {
        printf("Harf Notunuz - DC ve Ders ortalamaniz: %f\n",dersort);
        if(okulort < 2.5) {
            printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk.");
        }
    }
    else if (dersort >= 60 && dersort <65) {
        printf("Harf Notunuz - DD ve Ders ortalamaniz: %f\n",dersort);
        if(okulort < 2.5) {
            printf("Dersi tekrar alman yararli olur cunku ortalaman dusuk.");
        }
    }
    else {
        printf("Harf Notunuz - FF ve Ders ortalamaniz: %f\n",dersort);
        printf("Dersten Kaldiniz.");
    }

    return 0;
}