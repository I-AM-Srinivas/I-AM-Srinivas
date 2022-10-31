#include<stdio.h>
int main()
{
  int h1=2,m1=30,s1=45;
  int h2=5,m2=12,s2=03;
  int em=(s1+s2)/60;
  int ts=(s1+s2)-(em*60);
  int eh=(m1+m2+em)/60;
  int tm=(m1+m2+em)%60;
  int th=(h1+h2+eh);
  printf("total time %d hours : %d minutes : %d seconds\n",th,tm,ts);
  return 0;
}
