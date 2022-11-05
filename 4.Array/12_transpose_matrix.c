#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,numOfRows,numOfCols;
    int A[10] [10],transpose[10][10];
    printf("Enter the numnber of rows & cols= ");
    scanf("%d %d",&numOfRows,&numOfCols);
    //scanning A matrix
    printf("Enter element of A matrix=\n ");
    for(i=0; i<numOfRows; i++)
    {
        for(j=0; j<numOfCols; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i] [j]);
        }
       printf("\n");
    }
     //print A matrix
    printf("\nEntered matrix= \n");
    for(i=0; i<numOfRows; i++)
    {
      
        for(j=0; j<numOfCols; j++)
        {
            printf("%d ",A[i] [j]);
        }
        printf("\n");
    }
    //transpose matrix
   
    for(i=0; i<numOfRows; i++)
    {
        for(j=0; j<numOfCols; j++)
        {
         transpose[j][i]=A[i][j];
        }
       printf("\n");
    }
    //print transpose matrix
    printf("\ntranspose matrix= \n");
    for(i=0; i<numOfCols; i++)
    {
      
        for(j=0; j<numOfRows; j++)
        {
            printf("%d ",transpose[i] [j]);
        }
        printf("\n");
    }
    return 0;
}