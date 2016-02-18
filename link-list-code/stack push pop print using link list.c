#include <stdio.h>
#include <stdlib.h>
struct node {
   int data;
   struct node *next;
};
struct node *head;
int main ()
{
   head = NULL;

   push (2); print();
   push (3); print();
   pop (); print();
   pop (); print();
   pop (); print();
   return 0;
}
void push (int x) {
   struct node *temp = (struct node *) malloc (sizeof (struct node));
   temp->data = x;
   temp->next = head;
   head = temp;
}
void pop () {
   if (head == NULL) {
      printf ("Stack overflow\n");
      return;
   }
   struct node *temp;
   temp = head;
   head = temp->next;
   free (temp);
}
void print () {
   if (head == NULL) {
      printf ("Nothing to print\n");
      return;
   }
   struct node *temp;
   temp = head;
   printf ("Stacks: ");
   while (temp != NULL) {
      printf (" %d", temp->data);
      temp = temp->next;
   }
   printf ("\n");
}
