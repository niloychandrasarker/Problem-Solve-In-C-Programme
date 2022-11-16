
/*write a programme to following this pattern
Enter the N = 5
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,row,col;
    printf("Enter the N = ");
    scanf("%d",&n);
    for ( row = 1; row <= n; row++)
    {
        for ( col = 1; col <= n-row; col++)
        {
            printf(" ");
        }


        for ( col = 1; col <= row; col++)
        {
            printf("* ");
        }
      printf("\n");
    }
    for ( row = n-1; row >=1; row--)
    {
        for ( col = 1; col <= n-row; col++)
        {
            printf(" ");
        }


        for ( col = 1; col <= row; col++)
        {
            printf("* ");
        }
      printf("\n");
    }

    return 0;
}
