#include<stdio.h>
int main(){
    int x = 1;
    int y = 1;
    for(;y;printf("%d %d\n", x,y ))
    y = x++ <=5 ;
    return 0 ;
}


/*init → missing → nothing.
    condition → y
    increment → printf("%d %d\n", x, y)

So the loop behaves like:

while (y) {
    y = x++ <= 5;
    printf("%d %d\n", x, y);
}
    */