//Write a program to Multiply two matrices.

#include<stdio.h>
int main(int argc, char const *argv[])
{
     int first[10] [10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k,sum=0;
     printf("Enter rows & colum for first matrix : ");
     scanf("%d %d",&r1,&c1);
       printf("Enter rows & colum for second matrix : ");
     scanf("%d %d",&r2,&c2);
     while (c1!=r2)
     {
      printf("Error !! colum of first matrix not equal to second matrix");
       printf("Enter rows & colum for first matrix : ");
     scanf("%d %d",&r1,&c1);
       printf("Enter rows & colum for second matrix : ");
     scanf("%d %d",&r2,&c2);
     }

     //takin input first matrix
     printf("\nenter eliment of first matrix :\n ");
      for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first[%d][%d]= ",i,j);
            scanf("%d",&first[i] [j]);
        }
       printf("\n");
    }
  //takin input second matrix
  printf("\nenter eliment of second matrix :\n");
   for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second[%d][%d]= ",i,j);
            scanf("%d",&second[i] [j]);
        }
       printf("\n");
    }
   
     //print first matrix
    printf("\nfirst= ");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i] [j]);
        }
        printf("\n");
    }
     //print second matrix
   
    printf("\nsecond= ");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i] [j]);
        }
        printf("\n");
    }
     //multiplication matrix
    for(i=0; i<r1; i++)
    {
        for ( j = 0; j < c2; j++)
    
        {
            for ( k = 0; k < c1; k++)
            {
                sum=sum+first[i][k]*second[k][j];
        
            }
            result[i][j]=sum;
            sum=0;
        }
        
    }
     //print result matrix
   
    printf("\nresult= ");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i] [j]);
        }
        printf("\n");
    }
    return 0;
}
