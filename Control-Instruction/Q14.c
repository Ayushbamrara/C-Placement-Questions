#include<stdio.h>
int main(){
    int i =0;
    while(i++ != 0){
        printf("%d\n", ++i);
        printf("\n");
    }
}

// No Output
// while(++i != 0)  // Infinite