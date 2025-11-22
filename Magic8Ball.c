//
// Created by Sebastiaan den Hertog on 19/11/2025.
//

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <_stdlib.h>

int main(int argc, char* argv[]) {
    bool continueRunning = true;
    char awnsers[4][15] = {"yes","absolutely","WellIDK","NO"};
    char *sentencesInput[50];
    while ( continueRunning ) {
        printf("enter a yes or no question, or exit if you want to quit\n");
        scanf("%s",sentencesInput);
        if (strcmp("exit",sentencesInput) == 0){return 0;}
        for (int i = 0 ; i < 8 ; i++) {
            printf("%s\n",&awnsers[(rand() % (3 - 0 + 1) + 0)]);
        }
    }
}
