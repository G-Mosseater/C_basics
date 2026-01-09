#include <stdio.h>
#include <stdbool.h>
#include <string.h>
struct Student
{

    char name[50];
    int age;
    float gpa;
    bool isFullTime;
};
void printStudent(struct Student student);

int main(void)
{
    struct Student student1 =
        {
            "Jim",
            33,
            2.5,
            true};

    struct Student student2 =
        {
            "Pump",
            44,
            3.5,
            false};

    struct Student student4 = {0};   // initializing an empty struct
    strcpy(student4.name, "Arbaer"); // adding values to it
    student4.age = 22;
    printStudent(student1);

        return 0;
}

void printStudent(struct Student student)
{
    printf("%s\n", student.name);
    printf("%d\n", student.age);
    printf("%.2f\n", student.gpa);
    printf("%s\n", (student.isFullTime ? "Yes" : "No"));

    printf("%s\n", student.name);
    printf("%d\n", student.age);
    printf("%.2f\n", student.gpa);
    printf("%s\n", (student.isFullTime ? "Yes" : "No"));
}