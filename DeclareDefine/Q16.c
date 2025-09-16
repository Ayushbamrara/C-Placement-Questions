/*
Which of the follwing operation incorrect 
#include<stdio.h>
int main(){
int i=35; i = i%5;       
printf("i = %d\n", i);        // 0
short int j=255; j = j % 15;
printf("j = %d\n", j);        // 0
long int k = 365L; k=k % 24;
printf("k = %d\n", k);        // 5
float a = 3.14; a = a % 3;  // compile error
double d = 6.28; d = d % 4;  // compile error
return 0;
}

% (modulus operator) is only allowed for integer types (int, short, long, long long, char if promoted).
% is not defined for floating-point numbers (float, double).
*/

// Another code 
#include<stdio.h>
int main(){
float a = 31.24;
double b = 6.36;
long double c = 5.46L;              //for gcc  long double c = 5.46  is incorrect explicily tell 5.46L for long double
printf("%f , %lf , %Lf", a , b, c);
}
// float - %f     double - %lf     long double - %Lf
// Representation of long double is 6.68L. (L in suffix).

