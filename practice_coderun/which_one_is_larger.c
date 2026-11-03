#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a- ");
    scanf("%d",&a);
    printf("Enter the value of b- ");
    scanf("%d",&b);
        if(a==b)
    {
        printf("%d and %d are equal\n",a,b);
    }
    else if(a>b)
    {
        printf("%d is larger than %d\n",a,b);
    }
    else if(b>a)
    {
        printf("%d is larger than %d\n",b,a);
    }

}