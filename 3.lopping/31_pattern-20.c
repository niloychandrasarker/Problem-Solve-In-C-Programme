

/*write a programme to following this pattern
Enter the N = 5
*   *
 * *
  *
 * *
*   *
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,row,col;
    printf("Enter the N = ");
    scanf("%d",&n);
    for ( row = 1; row <= n; row++)
    {
        for ( col = 1; col <= n; col++)
        {
           if(col== row|| row+col==n+1 )
           printf("*");

           else
            printf(" ");
        }


      printf("\n");
    }


    return 0;
}
