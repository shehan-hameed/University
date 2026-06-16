#include<stdio.h>
int main(){
    int days[7], demand, sum = 0;
    
    for(int i = 0; i < 7; i++){
        printf("Enter the demand on day %d: ", i+1);
        scanf("%d", &demand);
        
        if(demand < 0){
            demand = 0;
        } 
        days[i] = demand;
        sum += demand;
        
    }
    printf("[");
    for(int i = 0; i < 7; i++){
        printf("%d ", days[i]);
    }
    printf("]");
    
    printf("Total demand for the week is: %d", sum);
    
    return 0;
}