//playing around to understand pointers 
//x==*p
//&x==p
#include <stdio.h>
int main(void){
int* p;
int x;
int a[100];

p=&x;
*p=5;
printf("x=%d\t *p=%d\t &x=%d\t p=%d\t",x,*p,&x,p);

p=&a[0]; //same with p=a;
*p=33; //same with a[0]=33
printf("a[0]=%d\t *p=%d\t &a[0]=%d\t p=%d\t",a[0],*p,&a[0],p);

return 0;
}
