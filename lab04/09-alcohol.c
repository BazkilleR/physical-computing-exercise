#include <stdio.h>
#include <stdbool.h>

int main() {
    float a, b, c;
    bool first, second, third;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    first = a + b > c;
    second = a + c > b;
    third = b + c > a;

    if (first && second && third) {
        printf("Triangle is valid.");
    } else {
        printf("Triangle is not valid.");
    }
    
    return 0;
}