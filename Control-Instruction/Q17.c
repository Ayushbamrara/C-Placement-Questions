// We want to test whether a value lie between 2 - 4 or 5-7

// ans - 
#include<stdio.h>
int main(){
int  a = 5;
switch(a) {
    case 2:
    case 3:
    case 4:
    printf("Lie Between 2-4");
    case 5:
    case 6:
    case 7:
    printf("Lie between5-7");
}
}




// Question - Can continue and be used like break in switch
// Ans - No, contiue used only in loops