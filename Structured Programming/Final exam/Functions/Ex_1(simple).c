#include <stdio.h>

//Bonus function
double calculateBonus(double sales){
    if(sales > 500000){
        return sales * 0.08;
    }
    else if(sales > 100000){
        return sales * 0.05;
    }
    else{
        return sales * 0.02;
    }
}

//Tax function
double calculateTax(double gross){
    if (gross > 50000){
        return (gross - 50000) * 0.10;
    }
    else {
        return 0;
    }
}

//Main code
int main(){
    
    double basic = 35000.00;
    double sales;
    
    printf("Enter the sales revenue: ");
    scanf("%lf",&sales);
    
    double bonus = calculateBonus(sales);
    double gross = basic + bonus;
    double tax = calculateTax(gross);
    double net = gross - tax;
    
    printf("Net salary is: %.2f", net);
    
    
    
    return 0;
}