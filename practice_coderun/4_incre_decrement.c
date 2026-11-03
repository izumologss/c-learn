#include <stdio.h>
int main()
{
    int a= 2;
    printf("value=%d\n",a--); //2
    printf("value=%d\n",a++); //1
    printf("value=%d\n",++a); //3
    printf("value=%d\n",--a); //2
    printf("value=%d\n",a); //2

    return 0;
}