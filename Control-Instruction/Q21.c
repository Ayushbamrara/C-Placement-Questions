/* Tips 
for(;;)  - Infinite for loop
if(i == 5 && (if (i > 0))) - Error Expression syntax
Tricky Expression - 
a = 0, b= 1,c =3
*((a) ? &b : &c) = a ? b : c       //  c = 3
*/

#include<stdio.h>
int main(){
    int i = 0;
    for(;i<5;i++);
    printf("%d",i);
}
//Output - 5


/*
#include<stdio.h>
int main(){
    int x = 3;
    float y = 3.0;
    if(x == y){
        printf("Equal");
    } else {
        printf("Not Equal");
    }
}
//Equal */