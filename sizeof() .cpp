//23. C progrom to print size of variables using size of () operator
#include <stdio.h>

int main() {
    int x;
    float y;
    char z;

    printf("Size of int: %d\n", (int)sizeof(x));
    printf("Size of float: %d\n", (int)sizeof(y));
    printf("Size of char: %d\n", (int)sizeof(z));


    return 0;
}

