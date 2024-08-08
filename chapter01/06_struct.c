#include <stdio.h>
#include <string.h>

struct student
{
    char name[64];
    int age;
    float height;
    float weight;
};

int check_ID(struct student s, int min_age)
{
    if (s.age >= min_age)
    {
        s.age = 100;
        printf("Student age: %d\n", s.age);
        return 1;
    }
    return 0;
}

int main()
{
    struct student student1 = {"John", 20, 180.0, 70.0};
    struct student student2 = {"Jane", 21, 160.0, 50.0};
    printf("Name: %s, Age: %d, Height: %.1f, Weight: %.1f\n", student1.name, student1.age, student1.height, student1.weight);
    printf("Name: %s, Age: %d, Height: %.1f, Weight: %.1f\n", student2.name, student2.age, student2.height, student2.weight);

    struct student student3;
    student3 = student1;
    strcpy(student3.name, "Tom");
    printf("Name: %s, Age: %d, Height: %.1f, Weight: %.1f\n", student3.name, student3.age, student3.height, student3.weight);

    printf("Size of student: %lu\n", sizeof(struct student));

    int min_age = 18;
    if (check_ID(student1, min_age))
    {
        printf("Student1 is over %d years old\n", min_age);
    }
    else
    {
        printf("Student1 is under %d years old\n", min_age);
    }

    return 0;
}
