#include <stdio.h>

int main()
{
  int book_id;

  scanf("%d", &book_id);

  if (book_id < 1000)
  {
    if (book_id % 10 == 5 || book_id % 10 == 0)
    {
      printf("Science\n");
    }
    else if (book_id % 10 == 3 || book_id % 10 == 7)
    {
      printf("Literature\n");
    }
    else
    {
      printf("General Collection\n");
    }
  }
  else if (book_id >= 1000)
  {
    if ((book_id % 100) % 4 == 0)
    {
      printf("Reference\n");
    }
    else if (book_id % 100 == 11 || book_id % 100 == 22 || book_id % 100 == 33)
    {
      printf("History\n");
    }
    else
    {
      printf("Unclassified\n");
    }
  }
  return 0;
}