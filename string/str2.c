#include<stdio.h>
#include<string.h>

char *camp(char s1[],char s2[]){
  int i=0;
	while(s1[i]!='\0'&&s1[i]==s2[i]){
	 
	i++;

	}
	
	if(s1[i]==s2[i]){
		printf("your both string are same okayyy\n");

	}
	else
	{
		printf("oh no your both string are diffrent \n");

	}


}
char *copy1(char st[],char st1[]){

	int i=0;
	while(st1[i]!='\0'){
		st[i]=st1[i];
		i++;
	}

	//strcpy(st,st1);
	//
	//
	st[i]='\0';
	return st;


}

char *copy_past(char s1[],char s2[]){

	int i=0;
	while(s1[i]!='\0'){
		i++;
	}int j=0;
	while(s2[j]!='\0'){
		s1[i]=s2[j];
		i++;j++;
	}
	
	s1[i]='\0';
	return s1;
}

int main(){
re: {
	
	
	char st[30],st1[30];
	printf("Enter 1 st string = ");
	gets(st);
	printf("Enter 2 st string = ");
	gets(st1);
        

	printf("your one string : %s and 2 st string : %s \n\n",st,st1);
	int n;

	printf("\n------------------------------------------------\n\n");
	printf(" n = 1 (chaking bot string are same ?)  \n n=2 ( convertig string 2 copy and past string 1 )\n n=3  ( copu string 2 and update string 1) \nn=10 re run all program \n");

	printf("\n so n = ");
	scanf("%d",&n);
	while(getchar()!='\n');
	if(n==1){

	printf("------------------chaking your string are same ? ----------------\n\n");
	camp(st,st1);
	}
	else if(n==2){
	printf("------string copy and past make new string ------\n\n");
	copy_past(st,st1);
	//printf("new -- %s",st);
	printf(" new copu and pasterd str 1= : %s\n\n",st);
	}
	else if(n==3){
         copy1(st,st1);
	printf("------------------chakimg converting copy string \n\n copy string 2 and udate make string 1 is = string 1= %s\n",st);
        
	}
int nn;
printf("\n------*******samthing new**********----------\n enter n= 10 and re run program of n= ");
scanf("%d",&nn);
while(getchar()!='\n');
if(nn==10){
goto re;
}
}
}
