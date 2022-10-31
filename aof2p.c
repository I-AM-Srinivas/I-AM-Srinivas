#include<stdio.h>
int main()
{
  int penr=111 , penp=969;
  int pencilr=49 , pencilp=578;
  int sump = (penp+pencilp)%100;
  int sumr = (penr+pencilr) + (penp+pencilp)/100;
  printf("total price is %d rupees and paise %d \n",sumr,sump);
  return 0;
}
