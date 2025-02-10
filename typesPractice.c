#include <stdio.h>

int main(void){
    char ch = 'A';
    int i = 0;
    float f = 1.1;
    double ff = 3.14159;

    printf("ch = %c,i = %d\n",ch,i);
    printf("f = %f, ff = %lf, ff = %.15f\n",f,ff,ff);

    return 0;
    
}