#include <stdio.h>

int main() {
    float price, discount, promotion_1, promotion_2;
    int amount;

    scanf("%f", &price);
    scanf("%f", &discount);
    scanf("%d", &amount);

    promotion_1 = price * amount * (discount / 100.0)
    promotion_2 = price * amount
    
    return 0;
}