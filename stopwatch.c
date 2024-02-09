#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){

	int h,m,s;
	int l,ll,lll;
  l=ll=lll=0;
	printf("Set Time to continew... watch ***>>:\n");
	scanf("%d %d %d",&h,&m,&s);
	if(h>12||m>60||s>60){
		printf("ERROR ! \n");
		exit(0);

	}
else {
	

		while(1){
			s++;
			if(s>59){
				m++;
				s=0;

			}
			if(m>59){
				h++;
				m=0;
			}
			if(h>12){
				h=1;
				printf("AM to pm" ); 
			}
			printf("\nClock : ");
printf(" %2d : %2d : %2d",h,m,s);

		sleep(1);
		 system("clear");
		}
}
}
