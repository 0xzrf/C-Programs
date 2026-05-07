#include <stdio.h>

#define LOWER 0
#define UPPER 200
#define STEP 20

int main() {
  int fahr, cel;

  fahr = LOWER;

  printf("Celsius\t   Fahr\n");
  ;
  while (fahr <= UPPER) {
    cel = 5 * (fahr - 32) / 9;
    printf("%3d\t%6d\n", cel, fahr);
    fahr += STEP;
  }
}