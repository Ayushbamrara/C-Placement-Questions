#include<stdio.h>
int main(){
    float a = 0.7;
    if(0.7 > a){
        printf("hi");
    } else {
        printf("hello");
    }
}

// Output - hi
// a is declared as float (typically 32-bit).
// 0.7 is a double literal in C (64-bit).
// if (0.7 (double) > (double)a)
// double(0.7) ≈ 0.69999999999999996
// double(a)   ≈ 0.69999998807907104