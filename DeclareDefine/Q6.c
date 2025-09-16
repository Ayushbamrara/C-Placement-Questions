/*
No such difference but then fact that first one give hint that fun() is probably on 
another source file.
extern int fun();     
int fun();
*/

#include<stdio.h>
int main(){
    display();
    return 0;
}
void display(){
    printf("Ayush");
}

//Error - display() is called before it is defined