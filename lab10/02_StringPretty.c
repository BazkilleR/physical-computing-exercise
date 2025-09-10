#include <stdio.h>
#include <string.h>
#include <math.h>

// ฟังก์ชันพิมพ์เส้นกรอบด้านบน/ล่าง
void print_border(int width)
{
  for (int i = 0; i < width; i++)
    printf("*");
  printf("\n");
}

// ฟังก์ชันพิมพ์ข้อความให้อยู่กึ่งกลาง
void print_center_line(char *text, int width)
{
  int spaces_left = ceil((width - 2 - strlen(text)) / 2.0);
  int spaces_right = (width - 2 - strlen(text)) - spaces_left;

  printf("*");
  for (int i = 0; i < spaces_left; i++)
    printf(" ");
  printf("%s", text);
  for (int i = 0; i < spaces_right; i++)
    printf(" ");
  printf("*\n");
}

int main()
{
  char str1[51], str2[41];
  int width;

  // รับ input
  scanf("%d", &width);
  scanf("%50s %40s", str1, str2);

  // พิมพ์กล่องข้อความ
  print_border(width);
  print_center_line(str1, width);
  print_center_line(str2, width);
  print_border(width);

  return 0;
}
