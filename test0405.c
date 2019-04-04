#include <stdio.h>

main(){

    int a;
    char b;
    float c;
    double d;

    a = 520;
    b = 'F';
    c = 3.14;
    d = 3.141592653;

    printf("我是整數: %d\n", a);
    printf("ABCDE%cG \n", b);
    printf("圓周率是: %.23f\n", c);
    printf("更多位數的圓周率: %11.10f\n", d);

    return 0;
}
