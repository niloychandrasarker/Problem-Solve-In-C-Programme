

/*write a programme to following this pattern
Enter the N = 5
    1
    1
   121
  12321
 1234321
123454321
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,row,col,count=0;
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
           printf("%d",col);
        }
        for ( col = row-1; col >=1; col--)
        {
           printf("%d",col);
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
           printf("%d",col);
        }
        for ( col = row-1; col >=1; col--)
        {
           printf("%d",col);
        }


      printf("\n");
    }


    return 0;
}
