#include<stdio.h>
#include<string.h>
int main()
{
    int age = 45;
    float height = 5.9;
    double weight = 70.5;
    char gender = 'M';
    char subject[50] = "Computer Science";

    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Weight: %.1lf\n", weight);
    printf("Gender: %c\n", gender);
    printf("Subject: %s\n", subject);
}