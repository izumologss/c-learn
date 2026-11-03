#include <stdio.h>
int main()
 {

    int a;
    float b;
    double d;
    char c;

    printf("Enter an integer, a float, a double and a char- \n");
    scanf("%d %f %lf %c", &a, &b, &c, &d);

    printf("Integer value: %d\n", a);
    printf("Float value: %f\n", b);
    printf("Character value: %c\n", c);
    printf("Double value: %lf\n", d);


    return 0;
}
