#include<stdio.h>
int main(){
    int i = 1;
    switch(i){
        case 1: printf("i am case one");
        break;
        case 1*2+4: printf("i am case two");
        break;
    }
    return 0;
}

//No error - Constant expressions 1*2+4 are valid in case of  switch 

#include<stdio.h>
int main(){
    int i = 1;
    switch(i){
        
    }
    printf("No Error");
    return 0;
}

// No error - there can exist a switch case which dont have any cases.