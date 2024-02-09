  #include <stdio.h>
  void printary(char * str){
  int i=0;
  while(str[i]!='\0'){
   printf("%c ",str[i]);
  i++;}
  }
int main()
{
 
 char lol[]="mehul";
 int i=0,n;
 n= sizeof(lol)/sizeof(lol[0]);
  printary(lol);
    return 0;
} 
