#include<stdio.h>
int main(void){
    int user_input;
    do{
        printf("Please enter an int (0 to quit): ");
        scanf("%d", &user_input);
        printf("You entered %d\n", user_input);
    } while(user_input != 0);
        return 0;
    /* todo: Input the integer values and
    find out the supported range of int
    Hint: int data type is 4 bytes and signed */
}