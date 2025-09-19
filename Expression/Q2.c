#include<stdio.h>
int main(){
    int x = 4 , y , z;
    y = --x;
    z = x--;
    printf("x = %d, y = %d, z = %d", x, y, z);
}

// x = 2, y = 3, z = 3