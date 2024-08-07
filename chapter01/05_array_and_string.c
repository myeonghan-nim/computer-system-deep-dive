#include <stdio.h>
#include <string.h>

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d index in array is %d\n", i, arr[i]);
    }

    if (size > 0)
    {
        arr[0] = 8;
    }
}

int main()
{
    int size = 0;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
        size++;
    }
    arr[3] = 100;

    printf("array of %d items:\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    // Can not access the element that is out of the array size
    // printf("%d\n", arr[10]);

    print_array(arr, size);
    printf("0 index in array is %d\n", arr[0]);

    char str1[10] = "", str2[10] = "";
    str1[0] = 'H';
    str1[1] = 'i';
    str1[2] = '\0';
    printf("str1: %s\n", str1);

    strcpy(str2, str1);
    printf("str2: %s\n", str2);

    strcpy(str2, "Hello");
    printf("str2: %s\n", str2);
    printf("str2 length: %ld\n", strlen(str2));

    return 0;
}
