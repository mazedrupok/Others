#include <stdio.h>
void main()
{
   int h, m, s;
   printf("Enter present time: ");
   scanf ("%d %d %d", &h, &m, &s);
   int p;
   while(1) {

      if(s > 59) {
         m = m + 1; s = 0;
      }
      if(m > 59) {
         h = h + 1; m = 0;
      }
      if(h > 11) {
         h = 0; m = 0; s = 0;
      }

      s = s + 1;

   printf("\n DIGITAL CLOCK");
   printf("\n HOUR:MINUTE:SECOND");
   printf("\n%2d:%2d:%2d", h, m, s);

   for(p=0; p <= 305000000; p++);
   system ("cls");

   }
}
