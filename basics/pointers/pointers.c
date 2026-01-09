#include <stdio.h>

void birthday(int *age);

int main(void)
{
    int age = 33;

    // int *pAge = &age;

    birthday(&age); // you can pass the address of age directly with &age
    // point to the pointer to increment, not the variable
    printf("You are %d old\n", age);

    return 0;
}

void birthday(int *age)
{
    (*age)++; // dereference the variable before incrementing
}