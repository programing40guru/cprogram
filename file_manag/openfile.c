#include<stdio.h>
#include<stdlib.h>
int main(){

FILE *var;
 var = fopen("lol.txt","r");

if(var==NULL){

printf("your file is not read --<<<<<\n");
exit(0);
}
else {

printf("heyy your file its ready sucessfuly\n");
}
return 0;
}
