/*write a programme to following this pattern
Enter the N = 5
1 
2 4
3 6 9
4 8 12 16
5 10 15 20 25
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
            printf("%d ",col*row);
        }
      printf("\n");  
    }
    
    return 0;
}
