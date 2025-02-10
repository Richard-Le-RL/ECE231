/***************************************************
for-statement.c -- this program performs
operations using for statement and prints the
results
Date Author Revision
02/05/2024 Fatima Anwar initial version
***************************************************/
#include <stdio.h>
int main() {
    int s, i, n;
    // compute s = 1 + 2 + ... + n
    n = 19;
    s = 0;
    for (i = 1; i <= n; i++){
        s += i;
    }
    // Display the value of s
    printf("The sum from 1 to %d is: %d\n", n, s);
    return 0;
}