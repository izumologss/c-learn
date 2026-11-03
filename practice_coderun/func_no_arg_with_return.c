#include<stdio.h>
int value()
{
    int a, b, sum;
    scanf("%d %d", &a, &b);
    sum = a+b;
    printf("sum of %d and %d is: %d\n", a, b, sum);
    return sum;
}

int main()
{
    int result = value();
    printf("Returned value: %d\n", result);
    return 0;
}