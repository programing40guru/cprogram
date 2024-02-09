#include<stdio.h>
struct date { 
  
    int d : 5; // 0 to 31  convert 31 in to binary so finfef 5 digit 
     // so memery less require 
 
    
      int m : 4; // o to 12  // 
 
    int y;
};
 
int main()
{
   
    struct date dt = { 1, 2, 2024 };
    printf("Date is %d/%d/%d\n", dt.d, dt.m, dt.y);
    return 0;
}
