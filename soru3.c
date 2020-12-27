#include <stdio.h>

#include <stdlib.h>

int main() {
  float x, y;
  printf("Bu program ekteki dosya icerisindeki sekle gore hazirlanmistir.");
  printf("Koordinatlari giriniz");
  scanf("%f %f", & x, & y);
  if (y>=0 && y<= -x*x +2) {
    printf("Verdiginiz Koordinatlar alanin icindedir.");
  } else {
    printf("Verdiginiz Koordinatlar alanin disindadir.");
  };
  return 0;
}