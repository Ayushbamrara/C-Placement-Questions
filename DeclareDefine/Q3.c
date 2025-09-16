#include<stdio.h>
int main(){
    extern int x;                   
    x = 20;
    printf("%d\n", sizeof(x));   // 4
    return 0;
}

/* Error - undefined reference to `x'

Explaination - 
extern means “this variable is declared somewhere else (outside this file or later), not here.”

You are only telling the compiler: "Hey, x exists somewhere, trust me."

But you never defined x anywhere in your code.
👉 This causes a linker error because the compiler can’t find memory space for x.

✅ Fix: You must define x globally like this:
int x;  defination outside main;
*/
