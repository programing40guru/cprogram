#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
 FILE *var;
char con[100]= "programing 40 guru \n you are working on c programing language ";
var= fopen("www.txt","w");
if(var==NULL){
printf("hello not make and your are write place try agange \n");
exit(0);
}
else {
printf("---**this file are now opendede***---\n");
if(strlen(con)>0){
fputs(con, var);
fputs("\n",var);
}
printf("dadat writerd sussess in www.txt file ");
}


return 0;
}
