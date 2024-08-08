#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d is greater than %d\n", a, b);
    }
    else if (a < b)
    {
        printf("%d is less than %d\n", a, b);
    }
    else
    {
        printf("%d is equal to %d\n", a, b);
    }

    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    if (x == y)
    {
        printf("%d is equal to %d\n", x, y);
    }
    else
    {
        printf("%d is not equal to %d\n", x, y);
    }

    if ((x > 10) && (y >= x))
    {
        printf("Both conditions are true\n");
    }
    else if ((x < 10) || (y < x))
    {
        printf("At least one condition is true\n");
    }
    else
    {
        printf("Both conditions are false\n");
    }

    int i = 10;
    while (i < 10)
    {
        printf("while loop: i = %d\n", i);
        i++;
    }

    i = 10;
    do
    {
        printf("do-while loop: i = %d\n", i);
        i++;
    } while (i < 10);

    for (i = 0; i < 10; i++)
    {
        printf("for loop: i = %d\n", i);
    }

    int guess, num = 7;
    while (guess != num)
    {
        printf("Enter a number: ");
        scanf("%d", &guess);
        if (guess < num)
        {
            printf("Too low\n");
        }
        else if (guess > num)
        {
            printf("Too high\n");
        }
        else
        {
            printf("You guessed it!\n");
        }
    }

    for (guess = 0; guess != num;)
    {
        printf("Enter a number: ");
        scanf("%d", &guess);
        if (guess < num)
        {
            printf("Too low\n");
        }
        else if (guess > num)
        {
            printf("Too high\n");
        }
        else
        {
            printf("You guessed it!\n");
        }
    }

    return 0;
}
