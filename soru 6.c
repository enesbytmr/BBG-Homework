#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
    float x, y;
    printf("Bu program ekteki dosya icerisindeki sekle gore hazirlanmistir.\n");
    printf("Koordinatlari giriniz");
    scanf("%f %f", & x, & y);
    if (bs(x) <= 2 && abs(y) <= 2 && pow(x, 2) + pow(y, 2) <= 4 && !(x >= -2 && x <= 0 && abs(y) <= 1 && pow((x+1), 2) + pow(y, 2) <= 1) ){
        printf("Verdiginiz Koordinatlar alanin icindedir.");
    } else {
        printf("Verdiginiz Koordinatlar alanin disindadir.");
    };
    return 0;
}