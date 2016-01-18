#include <stdio.h>
int main ()
{
   int i, j, m, n, p, q, r, s;
   m = 3; n = 4; p = 8; q = 9; r = 1;  s = 11;
   //printf("\n\n\t\tI");
   for (i = 1; i < 10; i++) {
      printf("\n\n");
      for (j = 1; j <= 20; j++) {
         printf(" ");
      }
      if (i <= 3) {
      for (j = 1; j <= 11; j++) {

         if(j == m || j == n || j == p || j == q) {
            printf("* ");
         }
         else { printf("  "); }
      }
      m--; n++; p--; q++;
      }

      else if (i >= 4) {
      for (j = 1; j <= 11; j++) {

         if (j == r || j == s) {
            printf("* ");
         }
         else { printf("  "); }

      }
      r++; s--;
      }
   }
   //printf("U..............................\n\n.....................................................");
   getch();
   return 0;
}
