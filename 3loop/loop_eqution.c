#include<stdio.h>
int main(){
float x,y=1;
int n;

int count=1;
printf("enter x value = ");
scanf("%f",&x);
printf("\nenter n value =" );
scanf("%d",&n);

while(count<=n){
y=x*y;
count++;

}
printf("\n x=%.2f : n=%d so x^n= %.2f \n ",x,n,y);

return 0;
}
