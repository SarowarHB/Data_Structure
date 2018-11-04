#include<stdio.h>


int main()
{

    int a[2][2];  ///2D-array declaration///
    int i,j,sum=0;


    printf("vhai koyta number den : \n");
    for(i=0;i<2;i++)   ///loop for input///
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<2;i++)   ///loop for sum///
    {
        for(j=0;j<2;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("sum is = %d\n",sum);

return 0;
}
   ///Complexity of this program is O(n^2)///
