#include <stdio.h>
int main() {
    int ch;
    ch = getchar();
    while(ch != 'a'){
        if(ch != '\n')
        printf("ch was %c, value %d\n", ch, ch);
        ch = getchar();
    }
    return 0;
}