#include<stdio.h>
int main()
{
    int i, isprime=0;
    for(i=2;i<=100;i++)
    {
        isprime=1;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime==1)
        {
            printf("%d is prime number\n",i);
        }
    }
    return 0;
}