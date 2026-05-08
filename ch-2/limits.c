#include <ctype.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

#define HEX_PREFIX 2

void print_limits();
void print_escape_seq();
void print_stuff();
void experiment();
long htoi(char[]);

int main() { experiment(); }

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

/* lower: convert c to lower case; ASCII only */
int lower(int c) {
  if (c >= 'A' && c <= 'Z')
    return c + 'a' - 'A';
  else
    return c;
}

long htoi(char s[]) {
  if ((s[0] == '0') && (s[1] == 'x' || s[1] == 'X')) {
    long res = 0;
    for (int i = 0; i < strlen(s) - HEX_PREFIX; i++) {
      char current_char = s[i + HEX_PREFIX];
      if (current_char >= '0' && current_char <= '9') {
        res += pow(16, i) * (current_char - '0');
      } else if ((current_char >= 'A' && current_char <= 'F') ||
                 (current_char >= 'a' && current_char <= 'f')) {
        current_char = tolower(current_char);
        res += pow(16, i) * (current_char - ('a' - 10));
      } else {
        return 0;
      }
    }
    return res;
  } else {
    return 0;
  }
}

void squeeze(char s1[], char s2[]) {
  int i, j;
  for (i = j = 0; i < strlen(s1); i++) {
    for (int j = 0; j < strlen(s2); j++) {
      if (s1[i] != s2[j]) {
        s1[j++] = s2[j];
      }
    }
  }
}

void experiment() {
  int result = htoi("0xF0");

  if (result) {
    printf("Got result: %d\n", result);
  } else {
    printf("Invalid input for the argument");
  }
}
