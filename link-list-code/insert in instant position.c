#include <stdio.h>
#include <stdlib.h>
void insElem (int n);
void print ();
void inspos (int x, int n);
struct node {
   int data;
   struct node* next;
};
struct node* head;
int main ()
{
   int n, p, q;
   char ch;
   printf ("How many elements? : ");
   scanf (" %d", &n);
   insElem (n);
   print ();
   printf ("Want to insert element with position in that list?[y/n]: ");
   scanf (" %c", &ch);
   while (ch == 'y') {
      if (ch == 'y') {
         printf ("Enter element & its position: ");
         scanf (" %d %d", &p, &q);
         inspos (p, q);
         print ();
      }
      printf ("Want to insert element with position in that list?[y/n]: ");
      scanf (" %c", &ch);
   }
   return 0;
}
void insElem (int n) {
   int i;
   struct node* temp = (struct node* ) malloc (sizeof (struct node));
   head = temp;
   printf ("Enter %d elements: ", n);
   for (i = 1; i <= n; i++) {
      scanf (" %d", &temp->data);
      if (i == n) {
         temp->next = NULL;
         continue;
      }
      temp->next = (struct node* ) malloc (sizeof (struct node));
      temp = temp->next;
   }
}
void print () {
   struct node* temp = head;
   printf ("Elements: ");
   while (temp != NULL) {
      printf ("%d ", temp->data);
      temp = temp->next;
   }
   printf ("\n");
}
void inspos (int x, int n) {
   if (n == 1) {    // for 1st position only head should be accessed by temp1..
      struct node* temp1 = (struct node* ) malloc (sizeof (struct node));
      temp1->data = x;
      temp1->next = head;
      head = temp1;
      return;
   }
   struct node* temp = (struct node* ) malloc (sizeof (struct node));
   temp = head;
   int i = 0;
   for (i = 0; i < n-2; i++) {  //1st & nth position not neccessary for that n-2..
      temp = temp->next;
      if (temp->next == NULL) break; // if position is invalid(more than link size)-
   }                                //-then it will took the last position..
   struct node* temp1 = (struct node* ) malloc (sizeof (struct node));
   temp1->data = x;
   temp1->next = temp->next;
   temp->next = temp1;
}
