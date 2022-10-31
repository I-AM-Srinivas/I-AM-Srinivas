#include<stdio.h>
int main ()
{
        int rupees , paise , rempaise;
  
        paise =2074 , rupees = paise / 100;
        
        rempaise = paise - ( rupees * 100 );
        
        printf( " Value in rupees is %d",rupees );
        
        printf (".%d",rempaise );
        
        return 0;
}      
