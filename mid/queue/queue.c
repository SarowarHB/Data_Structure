#include<stdio.h>

int queue[5];                      ///Queue declaration///
int  head=-1,tail=0;               ///taking head and tail because in input value in head and delete value from tail///

void enqueue(int value)            ///input function for input value in queue///
{

    if(head>=5-1)
    {
        printf("queue is FULL !!!!\n\n");
    }
    else
    {
        head++;
        queue[head]=value;
    }


}

void dequeue()                 ///delete function for delete value///
{

    if(head<0)
    {
        printf("queue is empty !!! \n\n");
    }
    else
    {
        tail++;
    }
}

void display()                 /// display function for display value///
{

    printf(" Queue value is = ");
    int i;
    for(i=tail;i<=head;i++)
    {
        printf("%d ",queue[i]);
    }

    printf("\n head value is = %d\n",queue[head]);

    printf(" tail value is = %d \n\n",queue[tail]);


}
int main()
{

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();

    enqueue(22);

    dequeue();
    display();

 return 0;
}
                  ///complexity of this program is O(n)///
