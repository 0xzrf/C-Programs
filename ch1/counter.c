#include <stdio.h>

void print_blanks_nl_tabs();
void rm_mult_blanks();
void replace_chars();
void print_one_word_per_line();

int main() { print_one_word_per_line(); }

void print_blanks_nl_tabs() {
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

void rm_mult_blanks() {
  char at_least_one_blank = 0; // Initially, this is set to false
  int c;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (!at_least_one_blank) { // we already encountered a blank
        putchar(c);
        at_least_one_blank = 1;
      }
    } else {
      putchar(c);
      at_least_one_blank = 0;
    }
  }
  printf("\n");
}

void replace_chars() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\b');
    } else if (c == '\\') {
      putchar('\\');
      putchar('\\');
    } else {
      putchar(c);
    }
  }
}

void print_one_word_per_line() {
  int c;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      putchar('\n');
    } else if (c == '\n' || c == '\t') {
    } else {
      putchar(c);
    }
  }

  printf("\n");
}