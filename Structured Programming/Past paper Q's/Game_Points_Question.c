#include<stdio.h>

 int weeklyPoints(int base, int adjustments){
     return base + adjustments;
 }
 
 int weekToReward(int weekly, int target){
     if(weekly <= 0){
         return -1;
     }
     int weeks = (target + weekly -1) / weekly;
     /*By adding (weeklyPointsEarned - 1) to the numerator before dividing, you nudge
     any remainder over the edge to the next whole number.*/
     return weeks;
 }
 
 int main(){
     
     int base, weekly, adj = 0, target, choice;
     
     printf("Enter base weekly points and target reward: ");
     scanf("%d %d", &base, &target);
     
     printf("Did you had bonus round(1) or Faced penalty(2): ");
     scanf("%d", &choice);
     
     if(choice == 1){
         printf("Enter earned points: ");
         scanf("%d", &adj);
     }
     else if(choice == 2){
         printf("Enter penalty points: ");
         scanf("%d", &adj);
         adj = -adj;
     }
    else {
    printf("Invalid choice. No adjustment applied.\n");
    }
    
    int totalPoints = weeklyPoints(base, adj);
    printf("Total weekly points: %d\n", totalPoints);
     
    int totalWeeks = weekToReward(totalPoints, target);
     
     if(totalWeeks == -1){
        printf("Cannot reach reward with 0 or negative points.\n");
    } 
    else {
        printf("Number of weeks for reward: %d\n", totalWeeks);
    }
     
     return 0;
 }