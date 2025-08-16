#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLEN 255

void titlecase(char s[])
{
  int newword = 1;
  for (int i = 0; s[i]; i++)
  {
    s[i] = newword ? toupper((unsigned char)s[i]) : tolower((unsigned char)s[i]);
    newword = (s[i] == ' ');
  }
}

void merge(char a[][MAXLEN], char temp[][MAXLEN], int l, int m, int r)
{
  int i = l, j = m + 1, k = l;

  while (i <= m && j <= r)
  {
    if (strcmp(a[i], a[j]) <= 0)
    {
      strcpy(temp[k++], a[i++]);
    }
    else
    {
      strcpy(temp[k++], a[j++]);
    }
  }
  while (i <= m)
    strcpy(temp[k++], a[i++]);
  while (j <= r)
    strcpy(temp[k++], a[j++]);

  for (i = l; i <= r; i++)
    strcpy(a[i], temp[i]);
}

void mergesort(char a[][MAXLEN], char temp[][MAXLEN], int l, int r)
{
  if (l >= r)
    return;
  int m = l + (r - l) / 2;
  mergesort(a, temp, l, m);
  mergesort(a, temp, m + 1, r);
  merge(a, temp, l, m, r);
}

int main(void)
{
  int n;
  scanf("%d", &n);

  char name[n][MAXLEN];
  char tmp[n][MAXLEN]; // buffer สำหรับ mergesort

  for (int i = 0; i < n; i++)
  {
    scanf(" %[^\n]", name[i]);
    titlecase(name[i]);
  }

  mergesort(name, tmp, 0, n - 1);

  for (int i = 0; i < n; i++)
  {
    printf("%s\n", name[i]);
  }
  return 0;
}
