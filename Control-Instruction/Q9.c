#include<stdio.h>
int main(){
    int a=5;
    switch(a){
        printf("hello\n");
        case 1: printf("hy");
        break;
        case 3+5: printf("bye");
        break;
        case a: printf("a");  //Error
        break;
    }
    return 0;
}

//Output- Error - expression must have a constant value


#include<stdio.h>
int main(){
    int i = 4, j = 2;
    switch(i){
        case 1: printf("One");
        break;
        case j: printf("Two"); //Error
        break;
    }
    return 0;
}

//Output- Error - expression must have a constant value