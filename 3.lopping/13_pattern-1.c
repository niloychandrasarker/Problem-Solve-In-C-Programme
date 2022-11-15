/*write a programme to following this pattern
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,row,col;
    printf("Enter the N = ");
    scanf("%d",&n);
    for ( row = 1; row <= n; row++)
    {
        for ( col = 1; col <= row; col++)
        {
            printf("%d ",col);
        }
      printf("\n");  
    }
    
    return 0;
}
