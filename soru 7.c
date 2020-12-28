#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
  float x, y;
  printf("Bu program ekteki dosya icerisindeki sekle gore hazirlanmistir.\n");
  printf("Koordinatlari giriniz");
  scanf("%f %f", & x, & y);
  if (abs(x) <= 2 && abs(y) <= 1 && !(abs(x) < 1 && abs(y) < 1 && pow(x, 2) + pow(y, 2) < 1)) {
    printf("Verdiginiz Koordinatlar alanin icindedir.");
  } else {
    printf("Verdiginiz Koordinatlar alanin disindadir.");
  };
  return 0;
}