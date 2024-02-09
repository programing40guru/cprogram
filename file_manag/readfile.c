#include<stdio.h>

int main(){
 FILE*var;
int lol;

var = fopen("lol1.txt","r");
while(1){

 lol =fgetc(var);
if(feof(var)){break;}

printf("%c",lol);

}
fclose(var);

return 0;
}
