#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

void print_table(int a, int b)
{
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Max of %d and %d is %d\n", a, b, max(a, b));
    print_table(a, b);

    return 0;
}

// If you want to define a function after the main function, you need to declare the function before the main function.
/* Example
#include <stdio.h>

int max(int a, int b);
void print_table(int a, int b);

int main()
{
    // do something
}

int max(int a, int b)
{
    // do something
}

void print_table(int a, int b)
{
    // do something
}

*/
