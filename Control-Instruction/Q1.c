#include<stdio.h>
int main(){
    int i = 4;
    switch(i){
        default : printf("Default");
        case 1: printf("One");
        break;
        case 2: printf("Two");
        break;
        case 3: printf("Three");
    }
    return 0;
}

//Output- default One