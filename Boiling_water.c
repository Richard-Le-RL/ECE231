#include <stdio.h>
#define BOILING 212 /* degrees Fahrenheit */
int main() {
    long d_var; float f_var; long double l_d_var;
    int i;
    i = 0;
    printf("Fahrenheit to Centigrade\n");
    while(i <= BOILING){
        l_d_var = 5*(i-32);
        l_d_var = l_d_var/9;
        d_var = l_d_var;
        f_var = l_d_var;
        printf("%d %f %ld %Lf\n", i, f_var, d_var, l_d_var);
        i = i+1;
    }
    return 0;
}