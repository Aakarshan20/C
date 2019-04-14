#include<stdio.h>

int main(){
    char ch = 'C';
    char a=70, b=105, c=115, d=104, e=67;

    char height = 170;

    char name[6] = {'F', 'i', 's', 'h', 'C', '\0'} ;
    char name2[] = {"FishC"} ;
    char name3[] = "FishC";

    printf("%c = %d\n", ch,ch);
    printf("%c%c%c%c%c\n", a,b,c,d,e);
    printf("%d\n", height);
    printf("%s\n", name);
    printf("%s\n", name2);
    printf("%s\n", name3);


    return 0;
}
