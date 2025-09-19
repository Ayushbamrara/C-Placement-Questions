#include<stdio.h>
int main(){
    int x , y ,z;
    x = y = z = 1;
    z = ++x || ++y && ++z;
    printf("x = %d y = %d z = %d",x , y, z );
}

// x = 2 y = 1 z = 1
/* Why - Precedence:
&& has higher precedence than ||.
So expression groups like this:

z = (++x) || ((++y) && (++z));

Evaluate ++x first
++x → x = 2 → value = 2 (nonzero → true)
Since ++x is already true, the whole || is true.
Therefore, (++y && ++z) is not evaluated at all.

*/