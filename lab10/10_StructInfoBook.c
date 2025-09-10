#include <stdio.h>
#include <string.h>

int main()
{
  struct student_info
  {
    char firstname[61];
    char lastname[61];
    char gender[7];
    int age;
    char id[13];
    double gpa;
  } student1;

  scanf("%60s %60s %6s %d %12s %lf",
        student1.firstname,
        student1.lastname,
        student1.gender,
        &student1.age,
        student1.id,
        &student1.gpa);

  if (strcmp(student1.gender, "Male") == 0)
  {
    printf("Mr");
  }
  else if (strcmp(student1.gender, "Female") == 0)
  {
    printf("Miss");
  }
  printf(" %c %s (%d) ID: %s GPA %.2f\n",
         student1.firstname[0],
         student1.lastname,
         student1.age,
         student1.id,
         student1.gpa);
}