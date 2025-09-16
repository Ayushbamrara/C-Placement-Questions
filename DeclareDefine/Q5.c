/*   Correct
#include<stdio.h>  
int x = 20;
int main(){                  
    printf("%d\n", x);   
    return 0;
}               */


                /*  Incorrect
#include<stdio.h>  
{ Enter code here to remove error }
int main(){                  
    printf("%d\n", x);   //'x' undeclared (first use in this function)
    return 0;
}  
int x = 20;    */

// Ans - extern int x;

// final result 
#include<stdio.h>  
extern int x;
int x = 20;
int main(){                  
    printf("%d\n", x);   
    return 0;
}   
