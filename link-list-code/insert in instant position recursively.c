#include <stdio.h>
#include <stdlib.h>
void insert (int x);
void print ();
void ins (int x, int n);
struct node {
   int data;
   struct node* next;
};
struct node* head;
int main () {
   int i, n, x, p, q;
   printf ("How many elements to enter: ");
   scanf(" %d", &n);
   head = NULL;
   for (i = 1; i <= n; i++) {
      printf ("%dth element: ", i);
      scanf (" %d", &x);
      insert (x);
      print ();
   }
   printf ("Insert new element & its position: ");
   scanf (" %d %d", &p, &q);
   ins (p, q);
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
void ins (int x, int n) {
   if (n == 1) {
      struct node* temp1 = (struct node* ) malloc (sizeof (struct node));
      temp1->data = x;
      temp1->next = head;
      head = temp1;
      return;
   }
   struct node* temp = (struct node* ) malloc (sizeof (struct node));
   temp = head;
   int i = 0;
   for (i = 0; i < n-2; i++) {
      temp = temp->next;
      if (temp->next == NULL) break;
   }
   struct node* temp1 = (struct node* ) malloc (sizeof (struct node));
   temp1->data = x;
   temp1->next = temp->next;
   temp->next = temp1;
}
