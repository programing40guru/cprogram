#include<stdio.h>
#include<string.h>
int main(){

	char str[]= "me da";
	int i=0;
	for(i=0;str[i]!='\0';i++){
		printf("%c\t",str[i]);
		printf("addres =%u\n",&str[i]);
	}
	printf("\n--------------------\npointer using print char and address its\n");
	char s[]="mehul";	
	char*p;
	p=&s;
	while(*p!='\0'){
		printf("Charator is : %c \t",*p); // value dairect defined *p
		printf("address is: %u\n",p); //address p
		*p++;			      
	}
re: {
	printf("\n--------enter and printf full string---------\n");

	     char ll[50];
	     char kol[50];

     
	     printf("enter 1 st string = \n");
	     fgets(ll,sizeof(ll),stdin);
	     printf("enter 2 st string =\n");
	     fgets(kol,sizeof(kol),stdin);
	     printf("\n%s and %s\n",ll,kol);
	   
	     if((strcmp(ll,kol))==0){
		     printf("enterd both  string is same \n");
	     }
	     else { printf("enterd string both diffrent\n");}
    }
	     int nn;
	     printf("you try to re run program ? 1==");
	     scanf("%d",&nn);
	     while(getchar()!='\n');

	if(nn==1){
	goto re;
	}
	     

     
}
