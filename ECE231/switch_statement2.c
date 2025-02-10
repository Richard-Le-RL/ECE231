/* C Program to create a simple calculator using switch
statement */
#include <stdio.h>
int main(){
    char choice; // switch variable
    int x, y; // operands
    while (1) {
        printf("Enter the Operator (+,-,*,/)\n");
        scanf(" %c", &choice);
        printf("Enter the two numbers: ");
        scanf("%d %d", &x, &y);
        // switch case with operation for each operator
        switch (choice) {
            case '+':
            printf("%d + %d = %d\n", x, y, x + y);
            break;
            case '-':
            printf("%d - %d = %d\n", x, y, x - y);
            break;
            case '*':
            printf("%d * %d = %d\n", x, y, x * y);
            break;
            case '/':
            printf("%d / %d = %d\n", x, y, x / y);
            break;
            default:
            printf("Invalid Operator Input\n");
            }
    }
    return 0;
}