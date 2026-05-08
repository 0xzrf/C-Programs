#include <limits.h>
#include <stdio.h>

int main() {
  printf("Signed char: {Max: %d, Min: %d}\nUnsigned Char: {Max: %d, Min: %d}",
         CHAR_MAX, CHAR_MIN, UCHAR_MAX, 0);
  putchar('\n');
  printf("Signed short: {Max: %d, Min: %d}\nUnsigned short: {Max: %u, Min: %u}",
         SHRT_MAX, SHRT_MIN, USHRT_MAX, 0);
  putchar('\n');
  // Int ranges for signed an unsigned values
  printf("Signed Int: {Max: %d, Min: %d}\nUnsigned Int: {Max: %d, Min: %d}",
         INT_MAX, INT_MIN, UINT_MAX, 0);

  putchar('\n');
  printf(
      "Signed long: {Max: %ld, Min: %ld}\nUnsigned long: {Max: %ld, Min: %d}",
      LONG_MAX, LONG_MIN, ULONG_MAX, 0);
}