#include <stdio.h>
void pmax(int first, int second);
int main() {
    int i,j;
    for (i = -10; i <= 10; i++) {
        for (j = -10; j <= 10; j++){
            pmax(i,j);
        }
    }
    return 0;
    }
void pmax(int a1, int a2) {
        int biggest = (a1 > a2) ? a1: a2;
        printf("largest of %d and %d is %d\n",
        a1, a2, biggest);
}