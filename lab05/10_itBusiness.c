#include <stdio.h>

int main() {
  char command, subcommand;
  float acc = 0.0, wallet = 0.0, number;
  int error_amount = 0;

  scanf("%f", &acc);
  scanf("%f", &wallet);

  while (1) {
    scanf(" %c", &command);

    if (command == 'E') {
      scanf(" %c", &subcommand);
      if (subcommand == 'D') {
        break;
      }
    }

    scanf(" %f", &number);

    if (command == 'D') {
      if (number > wallet) {
        error_amount++;
      } else {
        wallet -= number;
        acc += number;
        error_amount = 0;
      }
    } else if (command == 'W') {
      if (number > acc) {
        error_amount++;
      } else {
        acc -= number;
        wallet += number;
        error_amount = 0;
      }
    }

    if (error_amount >= 3) {
      break;
    }
  }

  printf("%.2f\n", acc);
  printf("%.2f\n", wallet);

  return 0;
}
