//Declare an integer array of size 5 with initial values, and print all the elements using a loop

#include<stdio.h>
int main()
{ 
    int num[5] = {1, 2, 3, 4, 5};
    for(int i=0; i<5; i++)            /* here we define the index with i which is 0-4 cuz  array index starts from 0
                                      and ends at n-1 where n is the size of array which is 5 here*/
    {
        printf("num[%d] = %d\n", i, num[i]);
    }

    return 0;
}