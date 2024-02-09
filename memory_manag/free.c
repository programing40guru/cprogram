#include<stdio.h>
#include<stdlib.h>
int main(){
int *pt1,*pt2;
int n;

 
n =5;

pt1= (int*)malloc(n*sizeof(int));
pt2= (int*)calloc(n,sizeof(int));

if(pt1==NULL || pt2==NULL){
printf("memory not allocate ----");
exit(0);

}
else {

printf("memory sussufully allocate ---malloc ---\n");
free(pt1);
printf("malloc memory free susscufully\n");
printf("\nmemory susuccfully alloacte ---calloc ----\n");
free(pt2);
printf(" calloc sucusfully free ,.... \n ");
}

printf("\nhello mehul --its free memory allocation ****------\n");
return 0;
}
