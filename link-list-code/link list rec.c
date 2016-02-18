#include <stdio.h>
struct node
{
   int x;
   struct node* next;
};
struct node* head;

void addNote(struct node* link);
void printList(struct node* head);
int main ()
{
   head = (struct node* ) malloc(sizeof (struct node ));
   addNote(head);
   printList (head);
   free(head);
   return 0;
}
void addNote(struct node* link)
{
   printf("\nEnter a value (-1 to exit): ");
   scanf("%d", &link->x);
   if (link->x == -1) {
      link->next = NULL;
   }
   else {
      link->next = (struct node* ) malloc(sizeof(struct node ));
      addNote(link->next);
   }
}
void printList(struct node* head)
{
   struct node* localHead = head;
   printf("\nElements are: head");
   while (NULL != localHead->next) {
      printf("->%d", localHead->x);
      localHead = localHead->next;
   }
}
