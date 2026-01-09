#include <stdio.h>

enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

enum Status
{
    SUCCESS,
    FAILED,
    PENDING
};
void connectStatus(enum Status status);

int main(void)
{

    enum Day today = SUNDAY;

    printf("%d\n", today);

    if (today == SUNDAY || today == SATURDAY)
    {

        printf("it's the weekend\n");
    }
    else
    {
        printf("It s not the weekend\n");
    }

    enum Status status = SUCCESS;
    connectStatus(status);

    return 0;
}

void connectStatus(enum Status status)
{

    switch (status)
    {
    case SUCCESS:
        printf("Connection succesfull!\n");
        break;
    case FAILED:
        printf("Connection Failed!\n");
        break;
    case PENDING:
        printf("Connection pending!!\n");
        break;
    }
}