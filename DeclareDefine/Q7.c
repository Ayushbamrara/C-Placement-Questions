/* point Out Error if Any

#include<stdio.h>
int main(){
    char *cptr,c;
    void *vptr, v;     
    c = 10, v = 0;
    vptr = &v;
    cptr = &c
    return 0;
}   

Ans - 
size of 'v' is undefined or zero. This is because v is declared as void.
We can declare void pointer but not a simple variable of type void.


Fix - 
*/
#include<stdio.h>
int main(){
    char *cptr,c;
    char *vptr, v;     
    c = 10, v = 0;
    vptr = &v;
    cptr = &c;
    return 0;
}
    