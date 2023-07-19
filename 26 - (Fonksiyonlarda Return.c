#include<stdio.h>

int Faktoriyel(int sayi) {

    int fact=1;
    for (;sayi>0;sayi--){
        fact*=sayi; 
    }
    
}
int main() {

    int n;
        printf("Faktoriyelini Istediginiz Sayiyi Girin:");
        scanf("%d",&n);
        printf("Faktoriyel: %d",Faktoriyel(n));




    return 0;
}