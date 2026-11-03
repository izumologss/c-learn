#include<stdio.h>
int main()
{
    int students[5];
    printf("enter marks for 5 students:\n");
    scanf("%d %d %d %d %d",&students[0],&students[1],&students[2],&students[3],&students[4]);
    printf("marks of 5 students are: %d %d %d %d %d\n", students[0], students[1], students[2], students[3], students[4]);
    return 0;
}