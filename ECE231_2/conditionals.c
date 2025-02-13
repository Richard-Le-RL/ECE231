/***************************************************
if-statement.c -- this program perform arithmetic
operations based on conditional statements and
prints their results
Date Author Revision
02/05/2024 Fatima Anwar initial version
***************************************************/
#include <stdio.h>
int main() {
    int a = 0, b = 0, x, xx, yy;
    // Assuming a and b are already defined
    // or you can take input for them
    if (a >= b) {
        x = 0;
    }
    if (a >= b + 1){
        xx = 0;
        yy = -1;
    }
    else {
        xx = 100;
        yy = 200;
    }
    // Display the values of x, xx, and yy
    printf("x = %d, xx = %d, yy= %d\n", x, xx, yy);
    return 0;
}
