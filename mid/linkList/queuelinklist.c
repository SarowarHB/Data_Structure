#include <stdio.h>
#include<stdlib.h>

struct Node                          ///structure of link list///
{
   int data;
   struct Node *next;
}*tail = NULL,*head = NULL;

void enQueue(int value)             ///input function for input value///
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode -> data = value;
   newNode -> next = NULL;
   if(tail == NULL)
   {
      tail = head = newNode;
   }
   else{
      head -> next = newNode;
      head = newNode;
   }
}
void deQueue()                     ///delete function for delete value ///
{
   if(tail == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
      struct Node *temp = tail;
      tail = tail -> next;
      printf("\nDeleted value is : %d\n\n", temp->data);
      free(temp);
   }
}
void display()                           ///display function for display value ///
{
   if(tail == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
        printf("\nAll value of queue = ");
      struct Node *temp = tail;
      while(temp->next != NULL){
    printf("%d  ",temp->data);
       temp = temp -> next;
      }
      printf("%d\n",temp->data);
   }
}


int main()
{
   enQueue(10);    /// 10
   enQueue(20);    /// 10 20
   enQueue(40);    /// 10 20 40
   enQueue(50);    /// 10 20 40 50
   display();
   deQueue();      /// 20 40 50
   display();

    return 0;
}


