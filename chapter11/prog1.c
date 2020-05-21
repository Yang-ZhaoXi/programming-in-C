#include <stdio.h>

int main(void)
{
    int count = 10, x;
    //定义了一个整型指针变量
    int *int_pointer;

    //把count的地址赋值给指针变量int_pointer
    int_pointer = &count;
    //把int_pointer指向地址的数值赋给x
    x = *int_pointer;

    printf("count = %i, x = %i\n", count, x);

    return 0;
}