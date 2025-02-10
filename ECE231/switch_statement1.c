/***************************************************
Message printing function
Date Author Revision
02/05/2024 Fatima Anwar initial version
***************************************************/
#include <stdio.h>
void message(int message_number) {
switch (message_number) {
case 1:
printf("Hello World\n");
break;
case 2:
printf("Goodbye World\n");
break;
default:
printf("unknown message\n");
break;
}
}
int main() {
    int x = 2;
    message(1); /* What will happen? */
    message(x);
    message(0);
    return 0;
}