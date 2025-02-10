#include <stdio.h>
int main(){
    char *p;
    char ch = 'D';
    p = &ch;
    printf("%c, %c\n", *p, ch);
    *p = 'A';
    printf("%c, %c\n", *p, ch);
    return 0;
}