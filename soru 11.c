#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main() {
  float x, y;
  printf("Bu program ekteki dosya icerisindeki sekle gore hazirlanmistir.\n");
  printf("Koordinatlari giriniz");
  scanf("%f %f", & x, & y);
  if ((x*x + y*y)<=1 && 1-abs(x)>=y && y>=0) {
    printf("Verdiginiz Koordinatlar alanin icindedir.");
  } else {
    printf("Verdiginiz Koordinatlar alanin disindadir.");
  };
  return 0;
}