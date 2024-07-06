#include <math.h>
#include <stdio.h>

int main()
{
    /*
    Multi
    line
    annotation
    */
    // Single line annotation

    printf("Hello, World!\n");
    printf("sqrt(2) = %f\n", sqrt(2));

    int x, y, z;
    char letter;
    float real;
    double pi;

    x = 7;
    y = x * 7;
    z = x + y;

    letter = 'A';
    letter = letter + 1;

    real = 3.14;
    pi = 3.1415926;

    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("letter = %c\n", letter);
    printf("real = %f, pi = %f\n", real, pi);

    short a;
    long b;
    long long c;
    unsigned int d;

    printf("a number of bytes in a short: %lu\n", sizeof(a));

    a = 1 + 2 - 3 * 4 / 5 % 6;
    b = 0;
    b += a;
    c = 0;
    c++;
    d = 0;
    ++d;

    printf("a = %d, b = %ld, c = %lld, d = %u\n", a, b, c, d);

    return 0;
}
