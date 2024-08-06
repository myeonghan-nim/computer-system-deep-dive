#include <stdio.h>

int main()
{
    printf("Today number: %d\n", 1);

    char a;
    a = 'A';
    printf("A is %d which is the ASCII code for %c\n", a, a);
    a = 99;
    printf("A is %d which is the ASCII code for %c\n", a, a);

    int b, c;
    printf("Enter a first number: ");
    scanf("%d", &b);
    printf("Enter a second number: ");
    scanf("%d", &c);
    printf("The sum of %d and %d is %d\n", b, c, b + c);

    int x;
    float y;
    printf("Enter numbers: ");
    scanf("%d %g", &x, &y);
    printf("You entered %d and %g\n", x, y);

    return 0;
}
