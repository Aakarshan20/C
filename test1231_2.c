#include<stdio.h>

main(){

    int a,b,sum;
    printf("please input two numbers:\n");

    scanf("%d%d",&a,&b);

    sum = add(a,b);

    printf("%d+%d=%d", a,b,sum);

}

int add(int a, int b){
    //int c;
    return  a+b;
    //return c;
}
