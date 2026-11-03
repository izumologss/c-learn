#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a- ");
    scanf("%d",&a);
    printf("Enter the value of b- ");
    scanf("%d",&b);

    printf("Bitwise AND of %d and %d is %d\n",a,b,a&b);
    printf("Bitwise OR of %d and %d is %d\n",a,b,a|b);
    printf("Bitwise XOR of %d and %d is %d\n",a,b,a^b);
    printf("Bitwise NOT of %d is %d\n",a,~a);
    printf("Bitwise NOT of %d is %d\n",b,~b);

}