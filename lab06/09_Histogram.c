#include <stdio.h>
#include <ctype.h> // tolower()

int main(void)
{
  int n;
  scanf("%d", &n);

  // เก็บตัวอักษรที่อ่านมา และรายชื่ออักษรที่ไม่ซ้ำตามลำดับเจอจริง
  char chars[n];
  char unique[256];    // ลิสต์ตัวอักษรไม่ซ้ำ (ลำดับแรกที่เจอ)
  int freq[256] = {0}; // นับความถี่ของแต่ละอักษร (ดัชนีเป็นรหัส ASCII)

  int unique_count = 0;

  for (int i = 0; i < n; i++)
  {
    char ch;
    scanf(" %c", &ch); // ช่องว่างหน้ารูปแบบ เพื่อข้ามช่องว่าง/ขึ้นบรรทัด
    ch = tolower((unsigned char)ch);
    chars[i] = ch;

    // ถ้ายังไม่เคยเจออักษรนี้ ให้บันทึกไว้ในลิสต์ unique
    if (freq[(unsigned char)ch] == 0)
    {
      unique[unique_count++] = ch;
    }

    // เพิ่มจำนวนความถี่
    freq[(unsigned char)ch]++;
  }

  // แสดงผลตามลำดับที่ "เจอครั้งแรก"
  for (int i = 0; i < unique_count; i++)
  {
    unsigned char ch = (unsigned char)unique[i];
    printf("%c: %d\n", unique[i], freq[ch]);
  }

  return 0;
}
