
    /* 2. Develop a C program that uses arithmetic operators 
     (+, -, *, /, %) to calculate the sum, difference, product, 
     quotient, and modulus of two integers entered by the user */

     
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    int sum = a + b;
    int subs = a - b;
    int prod = a * b;
    int div = a / b;   
    int mod = a % b;

    printf("Sum: %d\n",sum);
    printf("Difference: %d\n",subs);
    printf("Product: %d\n",prod);
    printf("Quotient: %d\n",div);
    printf("Modulus: %d\n",mod);
    return 0;
}