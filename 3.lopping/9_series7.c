/*. Construct the following table. Here n is input from the user.
1 2 3 … n
2 4 6 … 2n
3 6 9 … 3n
. . . … .
. . . … .
n 2n 3n … nn*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
       printf("enter N= ");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
        printf("%d ",i);
       } 
       printf("\n");
       for(i=2;i<=n;i+=2)
       {
        printf("%d ",i);
       } 
        printf("\n");
       for(i=3;i<=n;i+=3)
       {
        printf("%d ",i);
       } 
    return 0;
}
