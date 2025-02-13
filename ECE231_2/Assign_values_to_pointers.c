#include <stdio.h>
int main(){
    char *p;
    char ch = 'D';
    p = &ch; // dereference ch and give its memory address to p
    printf("%c, %c\n", *p, ch);
    *p = 'A'; // the pointer p now now defines what it is pointing at to be 'A' 
    printf("%c, %c\n", *p, ch);
    return 0;
}