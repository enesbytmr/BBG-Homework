#include <stdio.h>

#include <stdlib.h>

int main() {
    float x, y;
    printf("Bu program ekteki dosya icerisindeki sekle gore hazirlanmistir.");
    printf("Koordinatlari giriniz");
    scanf("%f %f", & x, & y);
    if (x >= 0 && pow(x, 2) + pow(y, 2) <= 1 && pow((x-2), 2) + pow(y, 2) <= 4) {
        printf("Verdiginiz Koordinatlar alanin icindedir.");
    } else {
        printf("Verdiginiz Koordinatlar alanin disindadir.");
    };
    return 0;
}