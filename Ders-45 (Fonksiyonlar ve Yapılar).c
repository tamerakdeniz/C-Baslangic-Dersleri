#include <stdio.h>
struct Student{
    char isim[15];
    char soyisim[15];
    int numara;
};
void goster(struct Student a) {
    printf("Ogrencinin Bilgileri: %s %s %d",a.isim,a.soyisim,a.numara);
}
struct Student degerAl() {
    struct Student yeni;
    printf("Bilgilerini Girin:");
    scanf("%s %s %d",&yeni.isim,&yeni.soyisim,&yeni.numara);
    return yeni;
}
int main() {
    struct Student ogrenci1=degerAl();
    goster(ogrenci1);



    return 0;
 }