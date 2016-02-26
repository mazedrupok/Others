#include <stdio.h>
#include <math.h>
double cosine (double x)
{
   int i, j;
   double y = 1, sum = 1, z;
   z = x;
   for (j = 1; x >= 180; j++) {
      x = x -180;
   }
   x =x * 3.1416 / 180;

   for (i = 1; i < 10; i++) {
      y = y * pow((double)(-1), (double)(2*i -1)) * x*x /(2*i * (2*i -1));
      sum = sum + y;
   }
   if (j %2 == 0) return sum * (-1);
   else return sum;
}
double sine (double x)
{
   int i, j;
   double y, sum, z;
   z = x;
   for (j = 1; x >= 180; j++) {
      x = x -180;
   }
   x =x * 3.1416 / 180;
   y = sum = x;
   for (i = 1; i < 5; i++) {
      y = y * pow((double)(-1), (double)(2*i -1)) * x * x / ((2*i +1) * 2*i);
      sum = sum + y;
   }
   if (j %2 == 0) return sum * (-1);
   else return sum;
}
int main ()
{
   double x;
   printf("%lf\n", x= sine(210));
   printf("%lf\n", x = cosine(210));
   return 0;
}
