#include<stdio.h>
int main(){
    int x = 10, y = 20;         // !x = 0 , !(!x) = 1
    if( !(!x) && x){           // if(1 && 10)  => true (non zero elements)
        printf("x = %d",x);
    } else {
        printf("y = %d",y);
    }
}

//Output => x = 10