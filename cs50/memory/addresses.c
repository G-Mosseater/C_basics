#include <stdio.h>
// #include <cs50.h>

int main(void)

{

    char  *s = "hi";
    printf("%s\n", s);


    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}

// int main(void)
// {
//     int n = 50;
//     int *p = &n;
//     printf("%i\n", *p);
//     return 0;
// }