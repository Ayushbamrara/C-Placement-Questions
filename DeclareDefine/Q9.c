#include<stdio.h>
int main(){
    struct book
    {
        char name[20];
        int noofpages;
        float price;
    };
    struct book b = {0};
    printf("%d %f",b.noofpages ,b.price);
    return 0;
}

//Out - 0 0.000000