#include <stdio.h>

int main() {
    char fname1[300];
    char sname1[300];
    char fname2[300];
    char sname2[300];
    char fname3[300];
    char sname3[300];

    scanf("%s", fname1);
    scanf("%s", sname1);
    scanf("%s", fname2);
    scanf("%s", sname2);
    scanf("%s", fname3);
    scanf("%s", sname3);

    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s %s\n", fname2, sname2);
    printf("Person 3: %s %s\n", fname3, sname3);

    return 0;
}
