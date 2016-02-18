#include <stdio.h>
#include <stdlib.h>
struct node
{
   int x;
   struct node* next;
};
struct node* head;
void addNode (struct node* link)
{
   int i;
   struct node* tail = link;
   printf ("\nEnter a value [-1 to exit]: ");
   scanf (" %d", &tail->x);
   for (i = 0; tail->x != -1; i++) {
      tail->next = (struct node* ) malloc (sizeof (struct node ));
      tail = tail->next;
      printf ("\nEnter a value [-1 to exit]: ");
      scanf (" %d", &tail->x);
   }
   tail->next = NULL;
}
void printlist (struct node* head)
{
   struct node* localHead;
   localHead = head;
   printf ("\nElement are: head");
   while (NULL != localHead->next) {
      printf ("->%d", localHead->x);
      localHead = localHead->next;
   }
   printf ("\n");
}
int main ()
{
   //freopen ("in.txt", "r" , stdin);
   //freopen ("out.txt", "w", stdout);
   head = (struct node* ) malloc (sizeof (struct node));
   addNode (head);
   printlist (head);
   free (head);
   return 0;
}
