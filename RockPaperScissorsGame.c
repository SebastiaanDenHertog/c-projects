//
// Created by Sebastiaan den Hertog on 24/11/2025.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[]) {
    char elemetnts[3][9] = {"Rock","Paper","Scissors"};
    char *userInput[7];
    while (1) {
        printf("Rock, Paper or Scissors?\n");
        scanf("%s",userInput);
        int aiChoice = (rand() % (2 - 0 + 1) + 0);
        printf("The computer got %s \n",&elemetnts[aiChoice]);
        if (strcmp("Rock", userInput)==0) {
            if (aiChoice == 0) {
                printf("Tie\n");
            } else if (aiChoice == 1) {
                printf("You lose\n");
            } else {
                printf("You win\n");
            }
        }
        else if (strcmp("Paper", userInput)==0) {
            if (aiChoice == 1) {
                printf("Tie\n");
            } else if (aiChoice == 2) {
                printf("You lose\n");
            } else {
                printf("You win\n");
            }
        }
        else if (strcmp("Scissors", userInput)==0) {
            if (aiChoice == 2) {
                printf("Tie\n");
            }
            else if (aiChoice == 3) {
                printf("You lose\n");
            } else {
                printf("You win\n");
            }
        }
        else {printf("Invalid input try again\n");}
    }
}
