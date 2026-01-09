#include <stdio.h>

int main(void)
{
    int numbers[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    char grades[] = {'A', 'B', 'C'};

    printf("%d\n", sizeof(numbers));    // gets the number of bytes used for the array
    printf("%d\n", sizeof(numbers[0])); // display the size of one element in bytes

    // get's the full size of the array automatically
    int size = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}