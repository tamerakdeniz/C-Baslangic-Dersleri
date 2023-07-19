#include <stdio.h>
#include <string.h>
struct Student{
    char isim[15];
    char soyisim[15];
    int numara;
};
int main() {

    struct Student ogrenciler[3];
    int i;
    for(i=0;i<3;i++) {
        printf("%dninci ogrencinin bilgilerini girin:",i+1);
        scanf("%s %s %d",&ogrenciler[i].isim,&ogrenciler[i].soyisim,&ogrenciler[i].numara);
    }
    for(i=0;i<3;i++) {
        printf("%dninci ogrencinin bilgileri %s %s %d\n",i+1,ogrenciler[i].isim,ogrenciler[i].soyisim,ogrenciler[i].numara);
    }    


    return 0;
}