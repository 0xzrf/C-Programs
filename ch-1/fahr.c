#include <stdio.h>

#define LOWER 0
#define UPPER 200
#define STEP 20

int main() {
  int fahr, cel;

  fahr = LOWER;

  printf("Celsius\tFahr");
  ;
  while (fahr <= UPPER) {
    cel = 5 * (fahr - 32) / 9;
    printf("%d\t%d", cel, fahr);
    fahr += STEP;
  }
}