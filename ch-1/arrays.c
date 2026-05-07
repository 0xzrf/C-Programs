#include <stdio.h>

#define DIGITS 10

void digit_counter();

int main() { digit_counter(); }

void digit_counter() {
  int ndigits[DIGITS], c;

  for (char i = 0; i < DIGITS; i++) {
    ndigits[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' || c <= '9') {
      ++ndigits[c - '0'];
    }
  }

  printf("Digits count\n");
  for (char i = 0; i < DIGITS; i++) {
    printf("%d: %d\n", i, ndigits[i]);
  }
}