#include<stdio.h>
int main(){
    int i = 2;
    int j = i + (1,2,3,4,5,6);
    printf("%d", j);
}

// 8  -> i + last value -> 2 + 6  = 8