/* Function to initialize an array of integers
to a given initial value. Parameters passed:
a, the array of integers
n, number of elements to be initialized
val, the initial value */
#include <stdio.h>
//declare function
void initialize(int init_array[], int num, int init_val);
int main() {
    int x[40];
    // Initialize array values to zero
    initialize(x, 40, 0);
    return 0;
}
//define function
void initialize(int a[], int n, int val) {
    int i;
    for (i = 0; i < n; i++) {
    a[i] = val;
    printf("%d,", a[i]);
    }
    printf("\n");
}