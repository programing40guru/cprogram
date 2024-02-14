#include<stdio.h>
void fun(int lol[]){
for(int i=0; i<5;i++){
 lol[i]= lol[i]*2;

}

}

int main(){

int l[5]= {1,2,3,4,5};

fun(l);
for(int i=0;i<5;i++){

printf("%d\t",l[i]);
}
printf("\n");
}
