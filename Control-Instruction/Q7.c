#include<stdio.h>
int main(){
    char ch;
    if(ch = printf("")){
        printf("it matters");
    }
    else {
        printf("does not matter");
        
    }
    return 0;
}

//Does not matter 
// What does if (ch = printf("")) mean?

// = is assignment, not comparison.
// So printf("") is evaluated first → gives 0.
// Then ch = 0 assigns 0 into ch.
// if (ch = 0) means if(0) which is false.