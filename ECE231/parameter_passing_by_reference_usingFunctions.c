#include <stdio.h>
void calculate(int a, int b, int *sum, int *difference) {
*sum = a + b;
*difference = a - b;
}
int main() {
    int num1 = 10;
    int num2 = 5;
    int sum_result, diff_result;
    calculate(num1, num2, &sum_result, &diff_result);
    printf("Sum: %d\n", sum_result);
    printf("Difference: %d\n", diff_result);
    return 0;
}