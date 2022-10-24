#include<stdio.h>

void main()

{

   int i,j,n,sum=0,sumin=0;

   printf("Enter the value of n = ");

   scanf("%d",&n);

   for(i=1; i<=n; i=i+1)

   {

   printf("(");

      for(j=1;j<=i;j=j+1)

      {

        sumin=sumin+j;

        printf("%d",j);

        if (j<i)

        printf("+");

        else if(j=i)

        printf(")");

      }

      sum=sum+sumin;

       sumin=0;

        if (i<n)

        printf("+");

        else if(i=n)

        printf(" ");

   }

   printf("= %d\n",sum);

}