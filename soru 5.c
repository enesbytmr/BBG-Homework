#include <stdio.h>

#include <stdlib.h>

int main() {
    float x, y;
    printf("Bu program ekteki dosya icerisindeki sekle gore hazirlanmistir.\n");
    printf("Koordinatlari giriniz");
    scanf("%f %f", & x, & y);
    if (pow(x,2)+pow(y,2)<=1 && x-y>=1 || y-x>=1) {
        printf("Verdiginiz Koordinatlar alanin icindedir.");
    } else {
        printf("Verdiginiz Koordinatlar alanin disindadir.");
    };
    return 0;
}