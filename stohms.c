#include<stdio.h>
int main()
{
          int hours , minutes , seconds , Totalseconds , tsecf;
           
          Totalseconds = 526858;
          
          hours = Totalseconds / 3600;
        
          seconds= ( Totalseconds - ( 3600 * hours ) );
          
          minutes =  seconds / 60;
          
          tsecf= seconds-( minutes * 60 );

          printf(" Hours is %d \n ",hours );
        
          printf("Minutes is %d \n ",minutes );
         
          printf("Seconds is %d \n ",tsecf );
         
          return 0;
}          
