#include <stdio.h>

#define DIGITS 10

void digit_counter();
void print_histogram_horizontal();
void print_histogram_vertically();
long max_val_from_array(int *val);

int main() { print_histogram_vertically(); }

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

void print_histogram_horizontal() {
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
    printf("%3d: ", i);

    for (char j = 0; j < ndigits[i]; j++) {
      printf("=");
    }
    printf("\n");
  }
}

void print_histogram_vertically() {
  int ndigits[DIGITS], c;

  for (char i = 0; i < DIGITS; i++) {
    ndigits[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' || c <= '9') {
      ++ndigits[c - '0'];
    }
  }
  long max_value = max_val_from_array(ndigits);

  for (char i; i < DIGITS; i++) {
    printf("%d\t", i);
  }
  putchar('\n');

  for (long max_counter = 1; max_counter <= max_value; max_counter++) {
    for (char i = 0; i < DIGITS; i++) {
      if (ndigits[i] >= max_counter) {
        printf("|\t"); // if the counter is bigger then the counter, then print
                       // with |
      } else {
        printf(" \t"); // else just leave it blank for that line
      }
    }
    putchar('\n');
  }
  printf("\n");
}

long max_val_from_array(int *val) {
  long max = val[0];
  for (int i = 1; i < DIGITS; i++) {
    if (val[i] > max) {
      max = val[i];
    }
  }
  return max;
}