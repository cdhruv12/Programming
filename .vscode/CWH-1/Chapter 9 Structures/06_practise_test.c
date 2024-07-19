#include <stdio.h>
typedef struct bank
{
    char name;
    int accno;
    float money;
} cus;

void display(cus f)
{
    printf("The name of the customer is %c\n", f.name);
    printf("The account no. of the customer is %d\n", f.accno);
    printf("The money in the bank of the customer is %.3f\n", f.money);
}

int main()
{
    cus ctr;
    printf("Enter name of customer\n");
    scanf("%c", &ctr.name);
    printf("Enter account no. of customer\n");
    scanf("%d", &ctr.accno);
    printf("Enter money in the bank of customer\n");
    scanf("%.3f", &ctr.money);
    display(ctr);
    return 0;
}