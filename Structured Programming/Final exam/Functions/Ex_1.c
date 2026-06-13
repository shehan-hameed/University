#include <stdio.h>

double calculateBonus(int sales, int bonusP)
{
    double bonus;
    bonus = sales * bonusP / 100;
    return bonus;
}

double calculateTax(int gross, int taxP)
{
    double tax;
    tax = (gross - 50000) * taxP / 100;
    return tax;
}

double calculateNetSalary(double gross, double tax)
{
    double net;
    net = gross - tax;
    return net;
}

int main()
{

    int basic = 35000;
    int bonusP;

    int sales;
    printf("Enter Sales revenue: \n");
    scanf("%d", &sales);

    if (sales > 500000)
    {
        bonusP = 8;
        calculateBonus(sales, bonusP);
        // printf("Bonus is: %lf", bonus);
    }

    else if (sales > 100000)
    {
        bonusP = 5;
        calculateBonus(sales, bonusP);
        // printf("Bonus is: %lf", bonus);
    }

    else
    {
        bonusP = 2;
        calculateBonus(sales, bonusP);
        // printf("Bonus is: %lf", bonus);
    }

    double bonus = calculateBonus(sales, bonusP);

    double gross = basic + bonus;

    double tax = 0;
    int taxP = 10;

    if (gross > 50000)
    {
        tax = calculateTax(gross, taxP);
    }

    double net = gross - tax;

    printf("Net salary is: %.2f", net);

    return 0;
}
