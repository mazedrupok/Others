#include <stdio.h>
#include <stdlib.h>
struct node {
   int data;
   struct node* next;
};
struct node* head;
int main ()
{
   int n, i, x;
   struct node* temp;
   head = NULL;
   printf ("How many elements to insert: ");
   scanf (" %d", &n);
   printf ("Insert elements: ");
   for (i = 1; i <= n; i++) {
      temp = (struct node* ) malloc (sizeof (struct node));
      scanf (" %d", &temp->data);
      temp->next = head;  // 1st element points to NULL ..
      head = temp;        // head points to last element while i = n..
   }
   struct node* temp1;
   temp1 = head;
   printf ("Elements of list: ");
   while (temp1 != NULL) {
      printf ("%d ", temp1->data);
      temp1 = temp1->next;
   }
}
