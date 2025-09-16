#include<stdio.h>
int main(){
    int a[5] = {2,3};
    printf("%d %d %d",a[2],a[3],a[4]);
    return 0;
}

// 0 0 0 
// when an automatic array is partially initailized the remaining array elements are initialized to 0.