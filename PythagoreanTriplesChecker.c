//
// Created by Sebastiaan den Hertog on 22/11/2025.
// a^2 + b^2 = c^2
//If a2 + b2 = c2, then the triangle is right.
//If a2 + b2 > c2, then the triangle is acute.
//If a2 + b2 < c2, then the triangle is obtuse.
//

#include <stdio.h>

int main(int argc, char* argv[]) {
    while (1) {
        int triangleSidea,triangleSideb,triangleSidec;
        printf("Input the 3 sides of the triangle like: 3 4 5\n");
        scanf("%d %d %d",&triangleSidea,&triangleSideb,&triangleSidec);
        if ((triangleSidea*triangleSidea)+(triangleSideb*triangleSideb) == (triangleSidec*triangleSidec)) {
            printf("right triangle\n");
        }
        else {
            printf("not a right triangle\n");
        }
    }
}