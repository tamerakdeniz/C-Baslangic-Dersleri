#include <stdio.h>
int main() {

    int islem;
    int bakiye=1000;
    int tutar;

    printf("Islemler\n1:Para Cekme\n2:Para Yatirma\n3:Havale Yapma\n4:Bakiye Sorgulama\n5:Kart Iade\n\n\n");
    printf("Islemi Seciniz:");
    scanf("%d",&islem);

    switch (islem) {
    case 1:
        printf("Bakiyeniz %d\n",bakiye);
        printf("Cekilecek Tutar:");
        scanf("%d",&tutar);
        if (tutar > bakiye) {
            printf("Bakiye Yetesiz\n");
        }
        bakiye-=tutar;
        printf("Bakiyeniz: %d",bakiye);
        break;
    case 2:
        printf("Bakiyeniz %d\n",bakiye);
        printf("Yatirilacak Tutar:");
        scanf("%d",&tutar);
        bakiye+=tutar;
        printf("Bakiyeniz: %d",bakiye);
        break;
    case 3:
        printf("Bakiyeniz %d\n",bakiye);
        printf("Havale Yapilacak Tutar:");
        scanf("%d",&tutar);
        if (tutar > bakiye) {
            printf("Bakiye Yetesiz\n");
        }
        bakiye-=tutar;
        printf("Bakiyeniz: %d",bakiye);
        break;
    case 4:
        printf("Bakiyeniz %d",bakiye);
        break;
    case 5:
        printf("Kart Iade Edildi.\n");
        break;
    default:
        printf("Bilinmeyen Islem.");
        break;
    }
    return 0;
}