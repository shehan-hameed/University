#include<stdio.h>

 int weeklyPoints(int base, int adjustments){
     return base + adjustments;
 }
 
 int weekToReward(int weekly, int target){
     if(weekly <= 0){
         return -1;
     }
     int weeks = (target + weekly -1) / weekly;
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
     
     int totalPoints = weeklyPoints(base, adj);
     
     int totalWeeks = weekToReward(totalPoints, target);
     
     printf("Total weekly points: %d\n", totalPoints);
     printf("Number of week for reward: %d", totalWeeks);
     
     return 0;
 }