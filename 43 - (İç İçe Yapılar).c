#include <stdio.h>
#include <string.h>
struct Address{
    char mahalle[15];
    char cadde[20];
    char sokak[20];
    
};
struct Student{
    char isim[15];
    char soyisim[15];
    int numara;
    int yas;
    struct Address adres;

};
int main() {

    struct Student ogrenci1;
    strcpy(ogrenci1.isim,"Tamer");
    strcpy(ogrenci1.soyisim,"Akdeniz");
    ogrenci1.numara=2021512001;
    ogrenci1.yas=20;
    strcpy(ogrenci1.adres.mahalle,"Yesilyurt");
    strcpy(ogrenci1.adres.cadde,"Mavi Bulvar");
    strcpy(ogrenci1.adres.sokak,"70649 sokak");

    printf("%s %s %d %d %s %s %s",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara,ogrenci1.yas,ogrenci1.adres.mahalle,ogrenci1.adres.cadde,ogrenci1.adres.sokak);



    return 0;
}