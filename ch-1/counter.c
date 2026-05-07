#include <stdio.h>
		
int main() {
  long blanks, tabs, nl;
  int c;
  blanks = tabs = nl = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
      nl++;
    if (c == '\t')
      tabs++;
    if (c == ' ')
      blanks++;
  }

  printf("Blanks: %2ld\tTabs: %2ld\tNewlines: %2ld\n", blanks, tabs, nl);
}
