#include<stdio.h>
int main(){
    void fun();
    int i = 1;
    while(i<=5){
        printf("%d\n", i++);
        if(i > 2)
            goto here;           //Error
    }
    return 0;
}

void fun(){
    here : printf("Here is printed");
}


// goto cannot take control to a fucntion other than the one it is being used.
// goto cannot perform a non-local jump