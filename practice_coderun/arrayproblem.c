#include<stdio.h>
int main()
{
   int matrix [3][4];
   int matrix1 [3][4];
   int sum [3][4];

   for(int row=0;row<3;row++)
   {
       for(int col=0;col<4;col++)
       {
           printf("Enter the value of matrix[%d][%d]: ",row,col);
           scanf("%d",&matrix[row][col]);
       }
   }

   for(int row=0;row<3;row++)
   {
       for(int col=0;col<4;col++)
       {
           printf("Enter the value of matrix1[%d][%d]: ",row,col);
           scanf("%d",&matrix1[row][col]);
       }
   }

   for(int row=0;row<3;row++)
   {
       for(int col=0;col<4;col++)
       {
           sum[row][col] = matrix[row][col] + matrix1[row][col];
           printf("%d ",sum[row][col]);
       }
       printf("\n");
   }
}