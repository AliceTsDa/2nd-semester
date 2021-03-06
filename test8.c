//trying to understand malloc on a 2D matrix

#include<stdio.h>
#include<stdlib.h>

int main(void){
int** p;
int i,j,m,n;

printf("Give me the number of rows\n");
scanf("%d",&m);
printf("Give me the number of collums\n");
scanf("%d",&n);

p=malloc(sizeof(int*)*m);
if(p==NULL){
    printf("Sorry cannot allocate memory!\n");
    exit(0);
}

for(i=0;i<m;i++){
    p[i]=malloc(sizeof(int)*n);
    if(p[i]==NULL){
        printf("Sorry cannot allocate memory!\n");
        exit(0);
    }
}


for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        p[i][j]=i*j;
    }
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d ",p[i][j]);
    }
    printf("\n");
}

for(i=0;i<m;i++){
    free(p[i]);
}
free(p);

return 0;
}