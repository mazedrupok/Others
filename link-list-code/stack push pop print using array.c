#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10
int ara[MAX_SIZE];
int top = -1;
void push (int x) {
   if (top >= MAX_SIZE-1) {
      printf ("Stack overflow\n");
      return;
   }
   ara[++top] = x;
}
void pop () {
   if (top == -1) {
      printf ("No element to pop\n");
      return;
   }
   top--;
}
int topElem () {
   return ara[top];
}
void print () {
   if (top == -1) {
      printf ("Nothing to print\n");
      return;
   }
   int i;
   printf ("Stacks:");
   for (i = 0; i <= top; i++)
      printf (" %d", ara[i]);
   printf ("\n");
}
int main ()
{
   pop(); print();
   push (5); print();
   push (10); print();
   push (15); print();
   push (20); print();
   pop();
   push (25); print();
   push (25); print();
   push (25); print();
   push (25); print();
   push (25); print();
   pop ();
   push (25); print();
   push (25); print();
}
