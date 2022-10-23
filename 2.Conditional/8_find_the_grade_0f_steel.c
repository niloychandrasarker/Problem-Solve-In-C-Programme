/*A certain grade of steel is graded according to the following conditions:

Hardness must be greater than 50
Carbon content must be less than 0.7
Tensile strength must be greater than 5600
The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if and only one conditions is met
Grade is 5 is none of the conditions are met

Write a c program, which will require the user to give value of hardness, carbon content and tensile strength of the steel under consideration and output the grade of the steel.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    /*
    h = Hardness of steel
    cc = Carbon content
    ts = Tensile strength
    */
    float h, cc, ts;
    //    flags for three conditions
    int h_f=0, cc_f=0, ts_f=0;  //here 0 represent False and one represent for True
    int grade;
    printf("Enter the value of Hardness: ");
    scanf("%f", &h);

    printf("Enter the value of Carbon Content: ");
    scanf("%f", &cc);

    printf("Enter the value of Tensile Strength: ");
    scanf("%f", &ts);

    //For first three conditional
    if (h>50)
        h_f=1;
    if (cc<0.7)
        cc_f=1;
    if (ts>5600)
        ts_f=1;

    //For Finding Grade
    //1. if none of the conditions are met
    if(h_f==0 && cc_f==0 && ts_f==0)
        grade = 5;

    //2. if only one condition is met
    if(h_f==1 || cc_f==1 || ts==1)
        grade = 6;

    //3 if condition (i) and (iii) are met
    if(h_f==1 && cc_f==0 && ts_f==1)
        grade = 7;

    //4. if conditions (ii) and (iii) are met
    if(h_f==0 && cc_f==1 && ts_f==1)
        grade = 8;

    //5. if conditions (i) and (ii) are met
    if(h_f==1 && cc_f==1 && ts_f==0)
        grade = 9;

    //6. if all the three conditions are met
    if(h_f==1 && cc_f==1 && ts_f==1)
        grade = 10;

    printf("The grade of steel is: %d", grade);
}