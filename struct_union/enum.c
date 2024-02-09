#include<stdio.h>
enum week {jan,feb,march,jun,jul};
enum week1{ jan1 =1,feb1=3 };
int main(){

enum week day;
enum week1 day2;
day = jun;
day2= jan1;
printf("%d\n",day);
printf(" %d \n",day2);
}


