
#include<stdio.h>
int value()
{
    int a;
    scanf("%d", &a);

    if(a%2==0)
    {
        printf("it is an even number");
    }
    else
    {
        printf("it is an odd number");
    }

}
int main()
{
    value();
    return 0;
}