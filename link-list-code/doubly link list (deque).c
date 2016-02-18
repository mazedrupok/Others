#include <stdio.h>
#include <stdlib.h>
void insert (int n);
void printforward ();
void printbackward ();
struct node {
   int data;
   struct node* next;
   struct node* prev;
};
struct node *head, *tail;
int main ()
{
   int n;
   head = NULL;
   printf ("How many numbers: ");
   scanf (" %d", &n);
   insert (n);
   printforward ();
   printbackward();
   return 0;
}
void insert (int n) {
   struct node *temp, *temp1;
   temp = (struct node *) malloc (sizeof (struct node));
   head = temp;
   temp1 = NULL;
   int i;
   for (i = 0; i < n; i++) {
      scanf (" %d", &temp->data);
      temp->prev = temp1;
      temp1 = temp;
      if (i == n-1) continue;
      temp->next = (struct node *) malloc (sizeof (struct node));
      temp = temp->next;
   }
   temp->next = NULL;
   tail = temp;
}
void printforward () {
   struct node *temp = head;
   printf ("Forward: ");
   while (temp != NULL ) {
      printf ("%d ", temp->data);
      temp = temp->next;
   }
   printf ("\n");
}
void printbackward () {
   struct node *temp = tail;
   printf ("Backward: ");
   while (temp != NULL) {
      printf ("%d ", temp->data);
      temp = temp->prev;
   }
   printf ("\n");
}
