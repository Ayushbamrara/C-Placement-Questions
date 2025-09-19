#include<stdio.h>
int main(){
    int i = 1;
    printf("%d %d", ++i, ++i);
}

// classic undefined behavior
/*
1. What’s happening

You have ++i twice in the same function call.
In C, the order of evaluation of function arguments is unspecified.
That means the compiler can choose whether to evaluate the left ++i first or the right ++i first.
At the same time: ++i modifies i.
The C standard says: if a variable is modified more than once without an intervening sequence point, the behavior is undefined.
*/

/*
2. What undefined behavior means

The program has no guaranteed result.
On one compiler, you might see:
3 3
On another:
2 3
Or even:
3 2
*/