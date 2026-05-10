#include <stdio.h>

void fun(int x) { printf("%d\n", x); }

void self_strcat(char *s, char *t) {
  while (*s != '\0')
    s++;

  while (*s++ = *t++)
    ;
}

int main() {
  char s[32] = "Hello ";
  char *t = "world";

  self_strcat(s, t);

  printf("s: %s\n", s);
}