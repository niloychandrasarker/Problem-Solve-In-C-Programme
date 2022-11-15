/*write a programme to following this pattern
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
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
            printf("%d ",row);
        }
      printf("\n");  
    }
    
    return 0;
}