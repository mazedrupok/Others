#include <stdio.h>
int main ()
{
   int matrix[5][5] ={
                     {1,2,3,4,5},
                     {6,7,8,9,10},
                     {11,12,13,14,15},
                     {16,17,18,19,20},
                     {21,22,23,24,25}
                     };
   int row, col, size= 5,n =0;
   size--;
   while (size >= 0) {
      for (row = n, col = n; col <= size; col++) {
         printf("%2d ", matrix[row][col]);
      }
      row++;
      col--;
      printf("\n");
      for (; row <= size; row++) {
         printf("%2d ", matrix[row][col]);
      }
      col--;
      row--;
      printf("\n");
      for (; col >= n; col--) {
         printf("%2d ", matrix[row][col]);
      }
      row--;
      col++;
      printf("\n");
      for (; row >= n + 1; row--) {
         printf("%2d ", matrix[row][col]);
      }


      printf("\n");
      n++;
      size--;
   }
   return 0;
}
