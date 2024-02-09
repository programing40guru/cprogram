#include <stdio.h>
#include"scope1.c"
 extern int ans;
 int kol1=100;
int main()
{
    lol();
    ans=20;
    printf("%d \n",ans);
    
    printf("\n its iner linkeg in one file code usie extern keyworld\n");
    extern int kol;
    extern int kol1;
    printf(" %d \n %d ",kol,kol1);
    return 0;
}
int kol=50;
