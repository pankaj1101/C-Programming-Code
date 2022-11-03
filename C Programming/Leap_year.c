#include <stdio.h>
int main()
{
    int year;
    printf("Enter Year : ");
    scanf("%d", &year);

   // (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? printf("%d is a leap year", year) : printf("%d is not a leap year", year);
    
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
}
