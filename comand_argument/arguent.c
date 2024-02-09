#include<stdio.h>
int main(int avgc, char *avgv[]){
 printf("you have enetrd %d arguments \n",avgc);

for(int i=0 ;i <avgc;i++){

printf("%s\n",avgv[i]);
}

return 0;
}
