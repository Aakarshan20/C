#include<stdio.h>

int main(){

    unsigned int i ;
    char c;
    float f;
    short int si;
    long int li;
    long long int lli;
    _Bool b ;
    long double ld;

    i = -123;
    c = 'C';
    f = 3.14;
    si = 2;
    li = 200;
    lli = 2000;
    //b = False;
    ld = 3.14159;

    printf("size of unsigned int is %d\n", sizeof(unsigned int));
    printf("size of i is %d\n", sizeof(i));
    printf("i= %u\n",i);
    printf("size of char is %d\n", sizeof(char));
    printf("size of c is %d\n", sizeof(c));
    printf("size of float is %d\n", sizeof(float));
    printf("size of f is %d\n", sizeof f);

    printf("size of short int is %d\n", sizeof(short int));
    printf("size of si is %d\n", sizeof si);
    printf("size of long int is %d\n", sizeof(long int));
    printf("size of li is %d\n", sizeof li);
    printf("size of long long int is %d\n", sizeof(long long int));
    printf("size of lli is %d\n", sizeof lli);
    printf("size of _Bool is %d\n", sizeof(_Bool));
    //printf("size of b is %d\n", sizeof b);
    printf("size of long double is %d\n", sizeof(long double));
    printf("size of ld is %d\n", sizeof ld);

    return 0;

}
