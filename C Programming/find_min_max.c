#include <stdio.h>
int Find_Maximum();
int Find_Minimum();
int select_option();
int main()
{

    int option = select_option();

    if (option == 1)
    {
        int max = Find_Maximum();
        printf("\nMaximum number is : %d", max);
    }
    else if (option == 2)
    {
        int min = Find_Minimum();
        printf("\nMinimum number is : %d", min);
    }
    else
    {
        printf("**Select Correct Option**\n");
        select_option();
    }
}
int Find_Maximum()
{
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Number : ");
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
int Find_Minimum()
{
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Number : ");
        scanf("%d", &a[i]);
    }
    int min = a[0];
    for (int i = 0; i < 5; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
int select_option()
{
    int option;
    printf("**Select Option**\n 1.Find Maximum \n 2.Find Minimum\n Option : ");
    scanf("%d", &option);
    return option;
}