/*Three numbers are input through keyboard. Write a program to find out
the maximum and minimum of these 3 numbers.*/
#include <stdio.h>
 
int main()
{
    int A, B, C;
 
    printf("Enter the numbers A, B and C: ");
    scanf("%d %d %d", &A, &B, &C);
 //find largest number
    if (A >= B && A >= C)
        printf("%d is the largest number.", A);
 
    if (B >= A && B >= C)
        printf("%d is the largest number.", B);
 
    if (C >= A && C >= B)
        printf("%d is the largest number.", C);
        printf("\n");
//find lowest number
    if (A <= B && A <= C)
        printf("%d is the lowest number.", A);
 
    if (B <= A && B <= C)
        printf("%d is the lowest number.", B);
 
    if (C <= A && C <= B)
        printf("%d is the lowest number.", C);
 
    return 0;
}