#include <stdio.h>
#include <stdlib.h>
struct node {
   int data;
   struct node* next;
};
int main ()
{
   int n, i;
   struct node* temp;
   temp = (struct node* ) malloc (sizeof (struct node)); // it should be before head = temp statement..
   struct node* head = temp;   // First node is address to head..
   printf ("How many numbers to insert: ");
   scanf (" %d", &n);
   for (i = 1; i <= n; i++) {
      printf ("Element %d: ", i);
      scanf (" %d", &temp->data);
      if (i == n) {
         temp->next = NULL; // last temp pointer is pointed to NULL
         continue;
      }
      temp->next = (struct node* ) malloc (sizeof (struct node));  //previous temp pointed to another new node
      temp = temp->next;  // NOTED statement,, temp become as new node
   }
   struct node* temp1 = head; //Inserted list can be accessed at any time by *head :)
   printf ("Elements are: ");
   while (temp1 != NULL) {     //temp1 start from head address or first element address, and finish to the last element-
      printf ("%d ", temp1->data);  // -which is pointed to NULL ..
      temp1 = temp1->next;     // temp1 get the next node address by this..
   }
   printf ("\n");
   return 0;
}
