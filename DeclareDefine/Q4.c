#include<stdio.h>
int main(){
    extern int x;                   
    printf("%d\n", x);   
    return 0;
}
int x = 20;


// Output - 20