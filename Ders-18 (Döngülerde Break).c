#include <stdio.h>
#include <stdbool.h>
int main() {

    int toplam=0;
    int i;
    int sayi;

    for (i=0;true;i++) {
        printf("Sayiyi Giriniz: Cikmak icin -1 basin.");
        scanf("%d",&sayi);

        if(sayi==-1) {
            break;
        }

        toplam+=sayi;
    }
        printf("%d",toplam);
    return 0;
} 
