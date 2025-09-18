#include<stdio.h>
int main(){
    int i = 1;
    for(;;){
        printf("%d\n",i++);
        if(i>10)
        break;
    }
    return 0;
}

//Output - No error  1 2 3 4 5 6 7 8 9 10

