#include <stdio.h>
struct Student {
    char isim[15];
    char soyisim[15];

    int numara;
    int yas;
};

int main() {

    struct Student tamer={"Tamer","Akdeniz",2021512001,20};
    printf("%s %s %d %d",tamer.isim,tamer.soyisim,tamer.numara,tamer.yas);
    


    return 0;
}