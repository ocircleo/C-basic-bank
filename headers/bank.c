#include <stdio.h>
#include <ctype.h>
long int total = 0;
void printMoney()
{
    printf("your total money is : %d \n", total);
}
int totalMoney()
{
    return total;
}
void deposit(int x)
{
    total += x;
}
void withdraw(int x)
{
    total -= x;
}
void recheck()
{

    printf("Enter D to deposit W to withdraw and C to check balance: ");
    char action = getchar();
    int x;
    printf("The given character is: %c \n", action);
    if (tolower(action) == 'd')
    {
        printf("Enter Amount to Deposit: ");
        scanf("%d", &x);
        deposit(x);
    }

    else if (tolower(action) == 'w')
    {
        printf("Enter Amount to withdraw: ");
        scanf("%d", &x);
        withdraw(x);
    }
    else if (tolower(action) == 'c')
    {
        printMoney();
    }
    else
    {
        printf(" %c is not allowed \n", action);
    }
    char reEnter;
    printf("Another transaction (y/n): ");
    scanf(" %c", &reEnter);
    while (getchar() != '\n')
        ;
    if (tolower(reEnter) == 'y')
        recheck();
}