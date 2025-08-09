#include <stdio.h>

int main() {
  char word[100];
  int len = 0;

  scanf(" %[^\n]", word);

  while (word[len] != '\0') {
    len++;
  }

  for (int i = len - 1; i >= 0; i--) {
    printf("%c", word[i]);
  }
  printf("\n");
  return 0;
}