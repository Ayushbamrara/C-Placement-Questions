#include<stdio.h>
int main(){
    enum status{pass, fail, atkt};
    enum status std1 , std2, std3;
    std1 = pass;
    std2 = atkt;
    std3 = fail;
    printf("%d %d %d", std1, std2, std3); //0 2 1
}

// Our Expectation - pass atkt fail
// Orignal ans - 0 2 1 because enum elements always take values like 0 ,1,2,...etc.