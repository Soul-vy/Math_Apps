#include<stdio.h>

int main()
{ int x,y,L,i;
  printf("x,L is");
  scanf("%i%i",&x,&L);
  y=1;
  i=1;
  while (i<=L)
  {
  y=y*x;
  x--;
  i++;
  } 
  printf("\nxpL is");
  printf("\n%i",y);
  i=1;
  while (L>1)
  {
  i=i*L;
  L--;
  }
  x=y/i ;
  printf("\nxcL is");
  printf("\n%i",x);
    return 0;
}
