//playing around to understand pointers 
//x==*p
//&x==p
#include <stdio.h>

void swap(int* a,int* b);

int main(void){
    int a=5, b=10;
    printf("\n a=%d, b=%d",a,b);
    swap(&a,&b);
    printf("\n a=%d, b=%d",a,b);
    
    return 0;
}

void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\n a=%d, b=%d",*a,*b);
}
