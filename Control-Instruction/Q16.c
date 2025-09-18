#include<stdio.h>
int main(){
    char str[] = "part-time musicians are semiconductor";
    int a = 5;
    printf( a > 10 ? "%50s\n" : "%s", str);
    return 0;
}

// part-time musicians are semiconductor

//Question - Can switch statement switch on strings
//Ans - No , only valid for constant or constant expression