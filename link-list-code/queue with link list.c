#include <stdio.h>
#include <stdlib.h>
void print ();
void push (int x);
void pop ();
struct node {
   int data;
   struct node *next;
};
struct node *head, *tail;
int main ()
{
   head = NULL;
   tail = NULL;
   push (2); print();
   push (3); print();
   push (4); print();
   push (5); print();
   pop (); print();
   push (6); print();
   return 0;
}
void push (int x) {
   struct node *temp = (struct node *) malloc (sizeof (struct node));
   temp->data = x;
   if (head == NULL) {
      head = temp;
      tail = temp;
      temp->next = NULL;
      return;
   }
   tail->next = temp;
   tail = temp;
   temp->next = NULL;
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
   printf ("Stacks:");
   while (temp != NULL) {
      printf (" %d", temp->data);
      temp = temp->next;
   }
   printf ("\n");
}
