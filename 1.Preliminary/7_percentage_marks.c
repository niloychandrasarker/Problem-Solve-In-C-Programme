/*If marks obtained by a student in 5 different subjects are input from
keyboard, find out the aggregate marks and percentage marks obtained by
the student.*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int bangla, math, english, science, art, total;
    float percentage;
    printf("Enter the marks of Bangla: ");
    scanf("%d", &bangla);

    printf("Enter the marks of Math: ");
    scanf("%d", &math);

    printf("Enter the marks of English: ");
    scanf("%d", &english);

    printf("Enter the marks of Science: ");
    scanf("%d", &science);

    printf("Enter the marks of Art: ");
    scanf("%d", &art);

    total = bangla+math+english+science+art;

    percentage = total/5;

    printf("\nAggregate marks: %d", total);
    printf("\nPercentage marks: %0.2f %%", percentage);
    getch();
}