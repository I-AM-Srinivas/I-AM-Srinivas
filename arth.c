#include<stdio.h>
int main()
{
   int  a,b,c,d,e,f,g;
   a=20,b=6,c=a+b,d=a-b,e=a*b,f=a/b,g=a%b;
   printf("addition of a and b is %d \n",c);
   printf("subtraction of a and b is %d \n",d);
   printf("multiplication of a and b is %d \n",e);
   printf("division of a and b is %d \n",f);
   printf("modular division of a and b is %d \n",g);
   printf("increment of a is %d \n",++a);
   printf("decrement  of b is %d \n",--b);
   return  0;
}
