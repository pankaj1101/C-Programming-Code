#include <stdio.h>
int main()
{
    int a = 10, b = 20;

    printf("Before Swape");
    printf("\nFirst Number  : %d ", a);
    printf("\nSecond Number : %d ", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter Swape");
    printf("\nFirst Number  : %d ", a);
    printf("\nSecond Number : %d ", b);
}