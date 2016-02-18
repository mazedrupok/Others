#include <stdio.h>
#include <stdlib.h>
void insert (int x);
void print ();
void delete (int n);
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
   printf ("Enter position to delete: ");
   scanf (" %d", &pos);
   delete (pos);
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
void delete (int n) {
   struct node* temp;
   temp = head;
   if (n == 1) {
      head = temp->next;
      free(temp);
      return;
   }
   int i;
   for (i = 0; i < n - 2; i++)
      temp = temp->next;
   struct node* temp1;
   temp1 = temp->next;
   temp->next = temp1->next;
   free(temp1);
}
