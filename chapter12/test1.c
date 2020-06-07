#include <stdio.h>

int main(void)
{
    unsigned int i1 = 077u, i2 = 0150u;

    i1 ^= i2;
    i2 ^= i1;
    i1 ^= i2;
    printf("%o \n", i1);
    printf("%o \n", i2);
    
    return 0;
}