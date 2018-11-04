#include <stdio.h>
#include<stdlib.h>

struct Node                        ///structure of a Link list///
{
   int data;
   struct Node *next;
};
struct Node *head = NULL;

void push(int value)                  ///input function input value using link list///
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));///malloc function use for dynamic memory location///
   newNode->data = value;
   newNode->next = NULL;
   if(head == NULL)
   {

      head = newNode;
   }
   else
   {
      newNode->next = head;
      head = newNode;
   }

}
void display()                            ///for display all value///
{
   if(head == NULL)
   {
      printf("\nStack is Empty   !!!!\n");
   }
   else
   {
      struct Node *temp = head;
      printf("\n\nStack elements are =   ");
      while(temp->next != NULL)
      {
    	 printf("%d ",temp->data);
    	 temp = temp->next;
        }
      printf("%d ",temp->data);
   }
}
void pop()                        ///delete function, delete value using link-list///
{

      struct Node *temp = head;
      if(head->next == NULL)
      {
    	 head = NULL;
    	 free(temp);
      }
      else
      {
    	head = temp->next;
    	free(temp);

   }
}


int main()
{
   push(10);    /// 10
   push(20);    /// 10 20
   push(40);    /// 40 10 20
   push(50);    /// 50 40 10 20
   display();
   pop();       /// 40 10 20
   display();
   pop();       /// 10 20
   display();
    return 0;
}
