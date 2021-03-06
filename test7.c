//trying to understand malloc
#include<stdlib.h>
#include<stdio.h>

int main(void){
int* p;
int i,N;

printf("Give me the size of your matrix\n");
scanf("%d",&N);

p=malloc(sizeof(int)*N);
if(p==NULL){
    printf("Sorry, cannot allocate memory!\n");
    exit(0);
}

for(i=0;i<N;i++){
    p[i]=i*2;
}

printf("Here are some odd numbers:\n");
for(i=0;i<N;i++){
    printf("%d\n",p[i]);
}

free(p);

    return 0;
}
