/*If cost price and selling price of an item is input through the keyboard,
write a program to determine whether the seller has made profit or
incurred loss. Also determine how much profit he made or loss he
incurred.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float cost_price, selling_price, profit, loss;

    printf("Enter the cost price of an item: ");
    scanf("%f", &cost_price);

    printf("Enter the selling price of an item: ");
    scanf("%f", &selling_price);

    if (selling_price > cost_price)   
    {
        //calculate profit via selling price - cost price
        profit = selling_price - cost_price;
        printf("We earn %.2f profit by selling item.", profit);

    }

    else if (selling_price < cost_price)  
    {
        //calculate loss via cost price - selling price
        loss = cost_price - selling_price;
        printf("\nWe incurred %.2f loss on selling item.", loss);
    }

    else    //here we don't get any loss and profit on selling item when (cost price == selling price)
    {
        printf("\nWe don't get any loss and profit on selling item");
    }

}