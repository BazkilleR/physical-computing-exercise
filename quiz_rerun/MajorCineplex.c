#include <stdio.h>

int main()
{
  int age, day, price;

  scanf("%d", &age);
  scanf("%d", &day);

  if (day == 4)
  {
    printf("Ticket price: %d Baht", 100);
  }
  else if (day == 7 || day == 1)
  {
    if (age <= 12)
    {
      price = 120;
    }
    else if (age >= 13 && age <= 59)
    {
      price = 220;
    }
    else
    {
      price = 140;
    }
    printf("Ticket price: %d Baht", price + 20);
  }
  else
  {
    if (age <= 12)
    {
      price = 120;
    }
    else if (age >= 13 && age <= 59)
    {
      price = 220;
    }
    else
    {
      price = 140;
    }
    printf("Ticket price: %d Baht", price);
  }

  return 0;
}