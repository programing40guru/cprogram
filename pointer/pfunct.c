#include<stdio.h>
void swp(int *a,int *b){
	int tem= *a;
	*a=*b;
	*b=tem;
}


int *larg(int *a,int *b){
	if(*a>*b){   return a;}
	else { return b;}

}

int lol(int a,int b){
if(a>b){return a;}
else{return b;}
}

int main(){
	int x=15,y=50;
	printf("before swap value : x= %d y= %d\n",x,y); 
	swp(&x,&y);
	printf("after swap value : x= %d  y= %d\n",x,y);
	printf("\n -----------\n -retrun large number --\n-----------------\n");
	int *ans;
	ans= larg(&x,&y);
	printf("large value is = %d",*ans);

printf("\n---***new- mathod pointer function prin-----\n");
int (*p)(int ,int);
p= &lol;
printf("--new -its return large number = %d",lol(7,8));

}
