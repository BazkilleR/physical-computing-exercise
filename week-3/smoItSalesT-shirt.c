#include <stdio.h>

int main() {
    float price, new_price, discount;
    int quantity;

    scanf("%f", &price);
    scanf("%f", &discount);
    scanf("%d", &quantity);

    new_price = price - (price * discount / 100);
    printf("%.2f\n", new_price * quantity);

    return 0;
}
