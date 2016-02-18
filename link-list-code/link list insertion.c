#include <stdio.h>
#include <stdlib.h>
void insert (int x);
void print ();
struct node {
   int data;
   struct node* next;
};
struct node* head;
int main () {
   int i, n, x;
   printf ("How many elements to enter: ");
   scanf(" %d", &n);
   head = NULL;
   for (i = 1; i <= n; i++) {
      printf ("%dth element: ", i);
      scanf (" %d", &x);
      insert (x);
      print ();
   }
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
