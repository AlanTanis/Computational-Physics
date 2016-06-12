#include<stdio.h>
int main(int argc, char *argv[])
{
  int flag, x1, x, a, c, q, p, m, period=1;
  int x0 = 100000;

  //initial parameters
  q=2;p=2;m=52103

  a=4*q+1;
  c=2*p+1;

  //Create a file to save the results
  FILE *fp = fopen("c:\\out.txt","w");

  x1 = (a*x0+c)%m;
  x  = (a*x1+c)%m;
  while(x!=x1)
  {
    period++;
    x=(a*x+c)%m;
    printf("%d\n",x);
    fprintf(fp,"%d\n",x);
  }
  fclose(fp);
  printf("period:%d\n",period)
  return 0;
}
