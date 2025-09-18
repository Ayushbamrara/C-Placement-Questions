// Rewrite the following expression using conditional operator
// int main(){
// int a = 1, b;
// if(a > 10){
//     b = 20;
// }
// }
#include<stdio.h>
int main(){
int a = 1, b, dummy;
a > 10 ? b = 20 : (dummy = 1);
printf("%d ", b);
}
// a > 10 ? b = 20 : dummy = 1      Gives error
//Lvalue required in fucntion main error is resolved by just wrapping false condition
// inside paranthesis     expression  ? if_true : (if_false)

//In C, you cannot just use ?: as a statement unless you use its result somehow 
//(assign it, return it, pass it, etc.)
//1. Operator precedence issue
//In C, the ternary operator ?: has lower precedence than the assignment operator =.