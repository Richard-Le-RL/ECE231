#include <stdio.h>

int main(void){
    int a,b,c;
    a=5;
    b=5;
    c=2;
    printf("a is %d, b is %d, and c is %d\n",a,b,c);
    printf("a AND b is: %d, b OR c is: %d, NOT a is %d\n",a&&b,b||c,!a);
    printf("I had to do this myself :( damn\n");
    return 0;
}