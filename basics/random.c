#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    srand(time(NULL));
    int min = 100;
    int max = 500;

    int randomNum = (rand() % (max - min) + 1) + min;
    printf("%d\n", randomNum);

    return 0;
}