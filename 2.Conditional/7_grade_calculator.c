/*7. AUST grading policy is :
(i) 80 % marks or above is A+
(ii) 75% to 79% marks is A
(iii) 70% to 74% marks is A-
(iv) 65% to 69% marks is B+
(v) 60% to 64% marks is B
(vi) 55% to 59% marks is B-
(vii) 50% to 54% marks is C+
(viii) 45% to 49% marks is C
(ix) 40% to 44% marks is D
(x) Below 40% is F
Write a program which will take an input from user and calculate the grade of
a student according to AUST grading policy based on that input.*/
#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks : ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("Wrong Entry");
    }
    else if(marks<40)
    {
        printf("Grade F");
    }
    else if(marks>=44 && marks<44)
    {
        printf("Grade D");
    }
    else if(marks>=45 && marks<49)
    {
        printf("Grade C");
    }
     else if(marks>=50 && marks<54)
    {
        printf("Grade C+");
    }
    else if(marks>=55 && marks<59)
    {
        printf("Grade B-");
    }
     else if(marks>=60 && marks<64)
    {
        printf("Grade B");
    }
     else if(marks>=65 && marks<69)
    {
        printf("Grade B+");
    }
     else if(marks>=70 && marks<74)
    {
        printf("Grade A-");
    }
    else if(marks>=75 && marks<79)
    {
        printf("Grade A");
    }
    else
    {
        printf("Grade A+");
    }
}