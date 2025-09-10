#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct student_info
{
  char firstname[61];
  char lastname[61];
  char gender[7];
  int age;
  char id[13];
  double gpa;
};

char *to_lower_str(char str[])
{
  for (int i = 0; str[i]; i++)
    str[i] = tolower(str[i]);
  return str;
}

void sort(struct student_info arr[], int n, char sort_by[])
{
  struct student_info temp;

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      int cmp = 0;

      if (strcmp(sort_by, "name") == 0)
        cmp = strcmp(arr[i].firstname, arr[j].firstname);
      else if (strcmp(sort_by, "surname") == 0)
        cmp = strcmp(arr[i].lastname, arr[j].lastname);
      else if (strcmp(sort_by, "id") == 0)
        cmp = strcmp(arr[i].id, arr[j].id);

      if (cmp > 0)
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main()
{
  struct student_info student[20];
  char sort_by[20];

  for (int i = 0; i < 20; i++)
  {
    scanf("%60s %60s %6s %d %12s %lf",
          student[i].firstname,
          student[i].lastname,
          student[i].gender,
          &student[i].age,
          student[i].id,
          &student[i].gpa);
  }

  scanf("%s", sort_by);

  sort(student, 20, to_lower_str(sort_by));

  for (int i = 0; i < 20; i++)
  {
    if (strcmp(student[i].gender, "Male") == 0)
      printf("Mr");
    else if (strcmp(student[i].gender, "Female") == 0)
      printf("Miss");

    printf(" %c %s (%d) ID: %s GPA %.2f\n",
           student[i].firstname[0],
           student[i].lastname,
           student[i].age,
           student[i].id,
           student[i].gpa);
  }

  return 0;
}
