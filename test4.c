//playing around to understand pointers 
//x==*p
//&x==p
#include <stdio.h>
void foo(int* p, int n);

int main(void){
    int pin[100];
    int i;
    
    for(i=0;i<100;i++){
        pin[i]=i;
    }
    
    for(i=0;i<100;i++){
        printf("%d",pin[i]);
    }

    foo(pin,100);
    
    printf("\n\n\n");
    for(i=0;i<100;i++){
        printf("%d",pin[i]);
    }
}

void foo(int* p, int n){
    int i;
    for(i=0;i<100;i++){
        p[i]=2*i;
    }
}
