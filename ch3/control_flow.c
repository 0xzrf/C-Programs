#include <stdio.h>

int binsearch(int x, int v[], int n) {
  int low = 0;
  int high = n - 1;
  int mid;

  if (n <= 0)
    return -1;

  while (low < high) {
    mid = low + (high - low) / 2;
    if (x <= v[mid])
      high = mid;
    else
      low = mid + 1;
  }

  return v[low] == x ? low : -1;
}

void escape(char s[], char t[]) {
  int i, j;
  i = 0;

  for (j = 0; t[j] != '\0'; j++) {
    switch (t[j]) {
    case '\n':
      s[i++] = '\\';
      s[i++] = 'n';
      break;
    case '\t':
      s[i++] = '\\';
      s[i++] = 't';
      break;
    default:
      s[i++] = t[j];
      break;
    }
  }
  s[i] = '\0';
}

int main() {
  //   int v[] = {1, 2, 4, 5, 6};
  //   printf("ix for 4: %d\n", binsearch(6, v, 5));

  char s[100];
  char t[] = "Hello \nworld\t";
  escape(s, t);
  printf("s: %s\n", s);
}