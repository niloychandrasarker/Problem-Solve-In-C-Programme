#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,sum=0;
       
       for(i=3;i<=1691;i=i+8)
       {
         printf("%d+",i);
       sum=sum+i;
       } 
        printf("\nsum=%d\n",sum);
    return 0;
}

