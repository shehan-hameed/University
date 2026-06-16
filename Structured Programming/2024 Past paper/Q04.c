#include<stdio.h>
#include<math.h>

float calSavings(float salary, float exp){
    return salary - exp;
}

int monthsToSave(float savings, float vacCost){
    if(savings <= 0){
        return -1;
    }
    int months = (int) ceil(vacCost / savings);
    return months;
}

int main(){
    
    float salary = 50000;
    float fixedExp = 0, bonus = 0, unexpectedExp = 0, vacCost = 0;
    
    printf("Enter fixed monthly expenses: ");
    scanf("%f", &fixedExp);
    
    printf("Enter unexpected expenses: ");
    scanf("%f", &unexpectedExp);
    
    printf("Enter received bonus: ");
    scanf("%f", &bonus);
    
    if(unexpectedExp > 0){
        fixedExp += unexpectedExp;
    }
    
    if(bonus > 0){
        salary += bonus;
    }
    
    printf("Enter vacation cost: ");
    scanf("%f", &vacCost);
    
    float savings = calSavings(salary, fixedExp);
    int numMonths = monthsToSave(savings, vacCost);
    
    printf("\nTotal savings per month: %.2f", savings);
    printf("\nNmber of months needed to save money for vacation: %d", numMonths);
    
    return 0;
}
