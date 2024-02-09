#include<stdio.h>
#include<stdlib.h>
int main(){

FILE *var;


var = fopen("lol1.txt","w");

if(var==NULL){

printf("your file not create <<<<---\n");
exit(0);
}
else {
 
printf("your file create sussufully oky welldone ---** \n");

}
}
