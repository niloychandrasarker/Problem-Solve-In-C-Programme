/*Rahim’s basic salary is input through the keyboard. His House rent
allowance is 30% of basic salary and medical allowance is 5% of basic
salary. He gets extra 1000 tk as technical allowance. Write a program to
calculate his gross salary and print the result.*/

#include<stdio.h>
int main()
{
    float basic_salary,medical_allowance,house_rent, gross_salary;
    printf("Enter Basic Salary: ");
    scanf("%f",&basic_salary);

    medical_allowance = 0.3 * basic_salary;
    house_rent = 0.05 * basic_salary;

    gross_salary = basic_salary + medical_allowance + house_rent + 1000;

    printf("\n Basic Salary: %.2f",  basic_salary);
    printf("\n Medical Allowance: %.2f", medical_allowance);
    printf("\n House Rent: %.2f", house_rent);
    printf("\n\nGross Salary: %.2f", gross_salary);

    getch();
    return (0);
}
