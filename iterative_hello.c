#include <stdio.h>

// "Telling" the compiler that we intend to use a function called "show_message". Has no inputs and returns nothing, this is the "declaration".
void show_message(void); // you can invoke the same function multiple times

int main() { // you don't have to declare the main function, however you must declare other functions
    int count;
    count = 0;
    while(count < 10){
        show_message();
        count=count + 1;
    }
    return 0;

}
// the body of a simple function, this is now a definition
void show_message(void){ 
    printf("hello\n");
}