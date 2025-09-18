#include<stdio.h>
int main(){
    int j = 1;
    while(j <= 255);
    {
    printf("%c , %d", j, j);
    j++;
    }
    return 0;
    
}

// Infinite loop  With No output
// loop stuck on this -> while(j <= 255);