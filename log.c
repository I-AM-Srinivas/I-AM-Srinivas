#include<stdio.h>
int main()
{
 int a,b,c,d,e,f,g,h,i,j;
 a=20,b=6,c=a==b,d=a!=b,e=a<b,f=a>b,g=a>=b,h=c&&d,i=e||f,j=!g;
 printf("a==b AND a!=b is %d \n",h);
 printf("a<b OR a>b is %d \n",i);
 printf("!a>=b is %d \n",j);
return 0;
}
