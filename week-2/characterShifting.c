#include <stdio.h>

int main() {
  char text1, text2, text3, text4, text5;

  text1 = getchar();
  getchar();
  text2 = getchar();
  getchar();
  text3 = getchar();
  getchar();
  text4 = getchar();
  getchar();
  text5 = getchar();
  getchar();

  text1 += 1;
  text3 += 1;
  text5 += 1;

  printf("%c\n", text1);
  printf("%c\n", text2);
  printf("%c\n", text3);
  printf("%c\n", text4);
  printf("%c\n", text5);

  return 0;
}