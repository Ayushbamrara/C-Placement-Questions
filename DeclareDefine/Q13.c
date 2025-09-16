#include<stdio.h>
int main(){
    int x = 10, y = 20 , z = 5, i;
    i = x < y < z;
    printf("%d", i);                  // 1
}

// Explaination  - x < y  means 10 < 20  this turn out to be true. x < y is replaced with 1.
// 1 < z => 1 < 5 => true , we have to return int so true  = 1.