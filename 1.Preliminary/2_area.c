/*Write a program to find the area & perimeter of the
rectangle and the area & circumference of the circle.*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int r,a,b;
    float area,circumference,perimeter;

    //and the area & circumference of the circle.
    printf("Enter the value of radius : ");
    scanf("%d",&r);
    area=(float)3.1416*r;
    printf("area = %.2f\n",area);
    circumference=(float)2*3.1416*r;
     printf("circumference = %.2f\n",circumference);

   //the area & perimeter of the rectangle

    printf("Enter the value of length : ");
     scanf("%d",&a);
    printf("\n");
     printf("Enter the value of width : ");
     scanf("%d",&b);
    area=a*b;
    printf("area = %f\n",area);
    perimeter=2*(a+b);
    printf("perimeter = %f\n",perimeter);
    return 0;
}
