#include <stdio.h>
int main() {

    int a=5,*ap;
    float b=3.2,*bp;
    double c=3.412,*cp;
    char d='a',*dp;

    int sayilar[5]={1,2,3,4,5};
    int *arrayp;

    ap=&a;
    bp=&b;
    cp=&c;
    dp=&d;

    arrayp=&sayilar[1];

    printf("%u adresindeki int degeri %d'dir.\n",ap,*ap);
    printf("%u adresindeki float degeri %f'dir.\n",bp,*bp);
    printf("%u adresindeki double degeri %lf'dir.\n",cp,*cp);
    printf("%u adresindeki char degeri %c'dir.\n",dp,*dp);
    printf("%u adresindeki sayilarin elemaninin degeri %d'dir.\n",arrayp,*arrayp);





    return 0;
}