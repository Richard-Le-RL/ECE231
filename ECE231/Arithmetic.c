/*******************************************
Arithmetic library
Date Author Revision
02/05/2024 Fatima Anwar initial version
*******************************************/
#include <stdio.h>
// Function to perform addition
int add(int a, int b) { // as you can see, you must declare the type the function will return and the types of the arguments in the function
    return a + b;
}
// Function to perform subtraction
int subtract (int a, int b) {
    return a - b;
}
// Function to perform multiplication
int multiply(int a, int b) {
    return a * b;
}
// Function to perform division
float divide (int a, int b) {
    if (b != 0) {
        return (float)a / b;
}   else {
        printf("Error: Division by zero\n");
        return 0;
}
}
// Even/Odd check function
int isEven (int number) {
    return number % 2 == 0;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: "); // function to output something
    scanf("%d %d", &num1, &num2); // function to ask for an input from the user
    printf("Sum: %d\n", add(num1, num2)); // %d is for the user to input a "decimal integer" value
    printf("Difference: %d\n", subtract(num1, num2));
    printf("Product: %d\n", multiply(num1, num2));
    printf("Quotient: %.2f\n", divide (num1, num2));
    if (isEven (num1)) {
        printf("The first number is even\n");
    }
    else {
        printf("The first number is odd\n");
    }
    return 0;
}
