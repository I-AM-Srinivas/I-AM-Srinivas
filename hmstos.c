#include<stdio.h>
int main()
{
  int hours , minutes , seconds , Totalseconds;
  
  hours = 22 , minutes =  47 , seconds = 58  , Totalseconds = ( hours * 3600 ) + ( minutes * 60 ) + seconds;
  
  printf("Total seconds are %d \n ",Totalseconds);
  
  return 0; 
}
