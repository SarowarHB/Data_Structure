#include<stdio.h>

int main()
{

    int a[5];      ///Array declaration///
    int i,sum=0;

    printf("enter array value : \n");
    for(i=0;i<5;i++)    ///loop for  input value///
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++)    ///loop for sum all value in array///
    {
        sum=sum+a[i];
    }
    printf("sum = %d",sum);
}
///complexity of this  program is O(n)///
