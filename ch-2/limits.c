#include <float.h>
#include <limits.h>
#include <stdio.h>

void print_limits();
void print_escape_seq();
void print_stuff();

int main() { print_stuff(); }

void print_limits() {
  printf("Signed char: {Max: %d, Min: %d}\nUnsigned Char: {Max: %d, Min: %d}",
         CHAR_MAX, CHAR_MIN, UCHAR_MAX, 0);
  putchar('\n');
  printf("Signed short: {Max: %d, Min: %d}\nUnsigned short: {Max: %u, Min: %u}",
         SHRT_MAX, SHRT_MIN, USHRT_MAX, 0);
  putchar('\n');
  // Int ranges for signed an unsigned values
  printf("Signed Int: {Max: %d, Min: %d}\nUnsigned Int: {Max: %u, Min: %u}",
         INT_MAX, INT_MIN, UINT_MAX, 0);

  putchar('\n');
  printf(
      "Signed long: {Max: %ld, Min: %ld}\nUnsigned long: {Max: %lu, Min: %lu}",
      LONG_MAX, LONG_MIN, ULONG_MAX, 0UL);
  putchar('\n');

  printf("Float: {Max: %e, Min: %e}\nDouble: {Max: %e, Min: %e}", FLT_MAX,
         -FLT_MAX, DBL_MAX, -DBL_MAX);
  putchar('\n');

  printf("Long double: {Max: %Le, Min: %Le}", LDBL_MAX, -LDBL_MAX);
  putchar('\n');
}

void print_escape_seq() { putchar('\r'); }

void print_stuff() {
  printf("hello "
         "world\n");
}

void loop_equivalent(char s[]) {
  int c;
  int i = 0, limit = 10;
  while (i < limit) {
    c = getchar();

    if (c == '\n') {
      break;
    }

    if (c == EOF) {
      break;
    }

    s[i] = c;
    i++;
  }
}