#include<stdio.h>
int main(){
    char i = 0;
    for(i<=5 && i>= -1; ++i; i>0){
        printf("%d",i);
    }
    return 0;
}

//Output - 1 2 3 .......126 127 -128 -127 .....-2 -1
/*Explaination - for (initialization; condition; increment)

Initialization → i <= 5 && i >= -1
Condition → ++i
Increment → i > 0

i = 0;  
i <= 5 && i >= -1;      // runs once, then ignored
while (++i) {           // this is the condition
    printf("%d", i);
    i > 0;              // increment expression, does nothing useful
}

But i is a signed 8-bit char.
Range: -128 to 127.
After printing 127, ++i makes it overflow to -128.

*/