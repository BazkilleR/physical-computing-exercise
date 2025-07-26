#include <stdio.h>

int main()
{
    char sex, haveB;
    float kg, cc, blood;
    int drink_amount, hr, n;
    scanf(" %c", &sex);
    scanf(" %f", &kg);
    scanf(" %c", &haveB);
    scanf(" %f", &cc);
    scanf(" %d", &drink_amount);
    scanf(" %d", &n);
    scanf(" %d", &hr);

    float drinkN = ((drink_amount / 100.0) * cc) * n;

    float r = (sex == 'M') ? 0.68 : 0.55;
    blood = (drinkN / (kg * r * 10.0)) * 1000.0 - (hr * 15.0);

    if (blood <= 50.0 && haveB == 'Y') {
        printf("Safe");
    } else {
        printf("Not Safe");
    }

    return 0;
}