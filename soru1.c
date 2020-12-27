#include <stdio.h>

#include <stdlib.h>

int main() {
    float x, y;
    printf("Bu program ekteki dosya icerisindeki sekle gore hazirlanmistir.\n");
    printf("Koordinatlari giriniz");
    scanf("%f %f", & x, & y);
    if (abs(x) <= 1 && abs(y) <= 1 && abs(x) + abs(y) > 1) {
        printf("Verdiginiz Koordinatlar alanin icindedir.");
    } else {
        printf("Verdiginiz Koordinatlar alanin disindadir.");
    };
    return 0;
}