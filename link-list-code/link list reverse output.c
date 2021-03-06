#include <stdio.h>
#include <stdlib.h>
void insert (int x);
void print ();
void reverse ();
struct node {
   int data;
   struct node* next;
};
struct node* head;
int main () {
   int i, n, x, pos;
   printf ("How many elements to enter: ");
   scanf(" %d", &n);
   head = NULL;
   for (i = 1; i <= n; i++) {
      printf ("%dth element: ", i);
      scanf (" %d", &x);
      insert (x);
      print ();
   }
   reverse ();
   print ();
   return 0;
}
void insert (int x) {
   struct node* temp;
   temp = (struct node* ) malloc (sizeof (struct node));
   temp->data = x;
   temp->next = head;
   head = temp;
}
void print () {
   struct node* temp;
   temp = head;
   printf ("Elements: ");
   while (temp != NULL) {
      printf ("%d ", temp->data);
      temp = temp->next;
   }
   printf ("\n");
}
void reverse () {
   struct node *temp1, *prev, *oth;
   temp1 = head;
   prev = NULL;
   while (temp1 != NULL) {
      oth = temp1->next;
      temp1->next = prev;
      prev = temp1;
      temp1 = oth;
   }
   head = prev;
}
