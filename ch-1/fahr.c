#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

void print_fahr_to_cel();
void print_cel_to_fahr();
void print_fahr_to_cel_for();

int main() {
  // print_fahr_to_cel();
  // print_cel_to_fahr();
  print_fahr_to_cel_for();
}

void print_fahr_to_cel() {
  float fahr, cel;

  fahr = LOWER;

  printf("Celsius\t   Fahr\n");
  while (fahr <= UPPER) {
    cel = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.1f\t%6.0f\n", cel, fahr);
    fahr += STEP;
  }
}

void print_cel_to_fahr() {
  float fahr, cel;

  cel = LOWER;

  printf("Celsius\t   Fahr\n");
  while (cel <= UPPER) {
    fahr = (cel * (9.0 / 5.0)) + 32.0;
    printf("%3.0f\t%6.1f\n", cel, fahr);
    cel += STEP;
  }
}

void print_fahr_to_cel_for() {
  int fahr;

  printf("Fahr\t Celsius\n");
  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - 20) {
    printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
  }
}