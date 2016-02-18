#include <stdio.h>
#include <stdlib.h>
void insert (int n);
void print ();
struct node {
   int data;
   struct node* next;
};
struct node* head;
int main ()
{
   int n;
   printf ("How many number to insert: ");
   scanf (" %d", &n);
   insert (n);
   print ();
   //void revlistrec (struct node* p);
   revlistrec (head);
   print ();
}
void insert (int n) {
   int i;
   struct node* temp = (struct node* ) malloc (sizeof (struct node));
   head = temp;
   for (i = 0; i < n; i++) {
      scanf (" %d", &temp->data);
      if (i == n-1) continue;
      temp->next = (struct node* ) malloc (sizeof (struct node));
      temp = temp->next;
   }
   temp->next = NULL;
}
void print () {
   struct node* temp = head;
   printf ("Elements are:");
   while (temp != NULL) {
      printf (" %d", temp->data);
      temp = temp->next;
   }
   printf ("\n");
}
void revlistrec (struct node* p) {
   if (p->next == NULL) {
      head = p;   // Head is addressed for last node
      return;
   }
   revlistrec (p->next);
   struct node *q;
   q = p->next; // here p is not last node, its the previous of last node. q is addressed for last node
   q->next = p;  // last node addressed to previous node, previous link break.
   p->next = NULL; // previous link is NULL. .
                   // watch this: 11 Reverse a linked list using recursion.mp4
}
