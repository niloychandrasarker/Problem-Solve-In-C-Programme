/*write a programme to following this pattern
Enter the N = 5
1 
1 0
1 0 1
1 0 1 0
1 0 1 0 1
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
            printf("%d ",col%2);
        }
      printf("\n");  
    }
    
    return 0;
}
