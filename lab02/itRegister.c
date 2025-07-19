#include <stdio.h>

int main() {
    char fname[30];
    char lname[30];
    char id[30];
    int dd, mm, yyyy;
    float gpa;
    int i;

    scanf("%s", &fname);
    scanf("%s", &lname);
    scanf("%s", &id);
    scanf("%d/%d/%d", &dd, &mm, &yyyy);
    scanf("%f", &gpa);

    printf("Fullname: %s %s\n", fname, lname);
    printf("ID: %s\n", id);
    printf("DOB: %02d-%02d-%04d\n", dd, mm, yyyy);
    printf("GPA: %.2f\n", gpa);

    return 0;
}