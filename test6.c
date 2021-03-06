//trying to understand strings
#include <stdio.h>
#include <string.h>

int main(void){
char string1[80];
char hello[5]="hello";
int count;

printf("%s",hello);

printf("\nGive me a string to print\n");
scanf("%s",string1);
printf("\nYou gave me:%s\n",string1);

count=strlen(string1);
printf("Count of string's characters: %d\n",count);
return 0;
}
