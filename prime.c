#include<stdio.h>
int main()
{
    int n,i,c,t=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int j=2;j>0;j++)
    {
    c=0;
 for(i=1;i<=j;i++)
   {
    if(j%i==0)
     {
       c++;
     }
   }
   if(c==2)
    {
      printf("%d\n",j);
      t++;
    }
    if(t==n)
    break;
 }
    return 0;
}
