#include<stdio.h>

int stack[5];                      ///define a stack///
int head = -1;

void push(int value){              ///function for vale input///

    if(head>=5-1)
    {
        printf("stack is full !!!!\n\n");
    }
    else
    {
        head++;
        stack[head] = value;
    }

}

void pop(){                       ///function for value delete///

  if (head<0)
  {
      printf("stack is empty !!!!\n\n");
  }
  else
  {
      head--;
  }

}

void display(){                 ///display function for display stack value ///

    printf("\nData in my  stack is = ");
    int i;
    for(i=0;i<=head;i++){

            printf("%d ",stack[i]);
}

   printf("\ntop value is = %d\n\n",stack[head]);
}


int main()
{
    push(12);
    push(22);
    push(33);
    push(44);
    push(55);
    display();

    push(66);         ///when this time call push function show stack is FULL///

    pop();
    display();

return 0;
}
                    ///complexity of this program is O(n)///
