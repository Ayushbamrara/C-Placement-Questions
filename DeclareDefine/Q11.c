#include<stdio.h>
int fun();
int main(){
    int (*p)() = fun;
    (*p)();
    return 0;
}
int fun(){
    printf("Load and clear");
}

//Error - 'fun' undeclared
//Initialize fun() either 1.Extern int fun() ,  2.int fun().