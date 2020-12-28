#include <stdio.h>

#include <stdlib.h>

#include <math.h>
int main() {
    float x, y;
    printf("Bu program ekteki dosya icerisindeki sekle gore hazirlanmistir.\n");
    printf("Koordinatlari giriniz");
    scanf("%f %f", & x, & y);
    if ((y<=0 && y>=-1) && (x<=-y && x>=y)) {
        printf("Verdiginiz Koordinatlar alanin icindedir.");
    } else {
        printf("Verdiginiz Koordinatlar alanin disindadir.");
    };
    return 0;
}