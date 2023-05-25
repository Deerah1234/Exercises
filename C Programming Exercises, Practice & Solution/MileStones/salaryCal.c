#include <stdio.h>

int main(void)
{
    float salary, total;
    int hrs;

    printf("Enter the Salary (per hours): ");
    scanf("%f", &salary);
    printf("Enter the Total hours worked (in a month): ");
    scanf("%d", &hrs);
    
    total = salary * hrs;

    printf("Your payment is = $%.2f", total);
    return (0);
}