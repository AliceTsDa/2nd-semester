//Just me fooling around with vscode to get used to it
//i'll atempt to make a minmax function

#include<stdio.h> //input-output
#include<stdlib.h>
#include<limits.h>//INT_MIN,INT_MAX

int main(int argc,char *argv[]){
    int size=argc;
    int array[(size-1)];
    int max=INT_MIN;
    int min=INT_MAX;
   
    for (int i=0;i<=(size-2);i++){
        array[i]=atoi(argv[i+1]);
    }
    
    for (int i=0;i<=(size-2);i++){
        printf("%d\n",array[i]);
    }

    for (int i=0;i<=(size-2);i++){
        if(array[i]<=min){
            min=array[i];
        }
        if(array[i]>=max){
            max=array[i];
        }
    }
    
    printf("Max is:%d\n",max);
    printf("Min is:%d\n",min);
    
    return 0;
}
//test1 1 2 3 arrays example
//argc=5
//argv[0]=0 aka string(test1)
//argv[1]=2
//etc
//array[0]=2
//array[1]=3
//etc