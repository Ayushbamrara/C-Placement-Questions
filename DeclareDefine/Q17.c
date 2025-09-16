#include<stdio.h>
#include<math.h>
int main(){
    // float rem;
    // rem = 3.14 % 2.1;          incorrect
    // rem = modf(3.14 , 2.1);      ''
    // rem = fmod(3.14, 2.1);       ''
    // rem = 3.14 mod 2.1;          ''
    // We cannot obtain remainder in floating point devision


    //Round off 1.66 to 2.00000 and Truncate 1.75 to 1.00000 ? 
    float x = 1.66;
    float y = 1.75;
    printf("%f %f \n", ceil(x), floor(y));
    return 0;
}

// ceil - for round off 1.66 to 2.00
// floor - for truncate 1.75 to 1.000
// both are in math.h header file



/*  Question - what is storage class of i and j ;
int j;
int main(){
    int i
}

 Ans - Auto if declared within main class for i its auto
 extern if declared outside main for j its extern.   */

 
 /* Question - what will be value of i and j.
    int i;
    int j;
    fun(){
        int i;
        int j;
    }
        Ans - Depends upon where they are defined.
        if defined outside funtion then they treted as external storage class variable 
        hence would contain default value 0 and 0.0
        if defined inside function then they will be treted as automatic storage class 
        hance variable would conation garbage value.

 */

 /* Bonus 
     Always Byte stored by short int  < Byte stored by  int 
            Byte stored by  int  < Byte stored by long int 
 */