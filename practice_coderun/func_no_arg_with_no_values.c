#include<stdio.h>
void value()
{
    int a, b, sum;
    scanf("%d %d", &a, &b);
    sum = a+b;
    printf("sum of %d and %d is: %d\n", a, b, sum);

}
int main()
{
    value();
    return 0;
}